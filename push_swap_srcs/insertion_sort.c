/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:35:20 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 20:00:38 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_table	*copy_b(t_table *b)
{
	t_table	*tmp;
	int		i;

	if (!(tmp = malloc(sizeof(t_table))))
		return (NULL);
	if (!(tmp->table = malloc(sizeof(int) * b->size)))
		return (NULL);
	i = 0;
	tmp->size = b->size;
	while (i < tmp->size)
	{
		tmp->table[i] = b->table[i];
		i++;
	}
	return (tmp);
}

void	best_rotate(t_table *a, t_table *b, t_list **instr)
{
	int count1;
	int count2;
	int count3;
	int count4;

	count1 = rotate(a, b, rb);
	count2 = rotate(a, b, rrb);
	count3 = double_rotate(a, b, rr);
	count4 = double_rotate(a, b, rrr);
	if (count4 < count2 && count4 < count1 && count4 < count3)
		while (count4--)
			rrr_print(a, b, instr);
	else if (count3 < count2 && count3 < count1)
		while (count3--)
			rr_print(a, b, instr);
	else if (count2 < count1)
		while (count2--)
			rrb_print(b, instr);
	else
		while (count1--)
			rb_print(b, instr);
}

void	insertion_sort(t_table *a, t_table *b, t_list **instr)
{
	int	count1;
	int	count2;

	best_rotate(a, b, instr);
	pb_print(a, b, instr);
	if (!(a->size))
	{
		while (b->size)
			pa_print(a, b, instr);
		count1 = rotate_a(a, ra);
		count2 = rotate_a(a, rra);
		if (count2 < count1)
			while (count2--)
				rra_print(a, instr);
		else
			while (count1--)
				ra_print(a, instr);
	}
}
