/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:16:59 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/13 20:40:53 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_table *a, t_list **instr)
{
	if (a->size <= 1)
		return ;
	if (a->table[1] < a->table[0])
		sa_print(a, instr);
}

void	three_sort(t_table *a, t_table *b, t_list **instr)
{
	int min;
	int max;

	min = ft_min(a);
	max = ft_max(a);
	if (a->table[0] == min && a->table[1] == max)
	{
		pb_print(a, b, instr);
		sa_print(a, instr);
		pa_print(a, b, instr);
	}
	else if (a->table[1] == min && a->table[2] == max)
		sa_print(a, instr);
	else if (a->table[1] == max && a->table[2] == min)
		rra_print(a, instr);
	else if (a->table[0] == max && a->table[1] == min)
		ra_print(a, instr);
	else if (a->table[0] == max && a->table[2] == min)
	{
		ra_print(a, instr);
		sa_print(a, instr);
	}
}

void	five_sort(t_table *a, t_table *b, t_list **instr)
{
	if (checker(a, b))
		return ;
	selection_sort(a, b, instr);
	if (a->size > 3)
		selection_sort(a, b, instr);
	three_sort(a, b, instr);
	pa_print(a, b, instr);
	if (b->size)
		pa_print(a, b, instr);
}
