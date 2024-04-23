/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:19:51 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:19:57 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection_sort(t_table *a, t_table *b, t_list **instr)
{
	int i;
	int min;

	i = 0;
	min = ft_min(a);
	while (a->table[i] != min)
		i++;
	if (i > a->size / 2)
		while (i++ < a->size)
			rra_print(a, instr);
	else
		while (i-- > 0)
			ra_print(a, instr);
	if (!check(a))
		pb_print(a, b, instr);
	if (!(a->size) || check(a))
		while (b->size)
			pa_print(a, b, instr);
}
