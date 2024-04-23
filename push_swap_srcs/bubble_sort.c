/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:50:36 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:50:55 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_table *a, t_table *b, t_list **instr)
{
	while (!check(a))
	{
		if ((a->size >= 2 && ((a->table)[0] > (a->table)[1]))
			&& (b->size >= 2 && ((b->table)[0] < (b->table)[1])))
			ss_print(a, b, instr);
		else if (a->size < 2
			|| (a->size >= 2 && ((a->table)[0] < (a->table)[1])))
			pb_print(a, b, instr);
		else
			sa_print(a, instr);
	}
	while (b->size > 0)
	{
		if ((a->size >= 2 && ((a->table)[0] > (a->table)[1]))
			&& (b->size >= 2 && ((b->table)[0] < (b->table)[1])))
			ss_print(a, b, instr);
		else if (b->size < 2
			|| (b->size >= 2 && ((b->table)[0] > (b->table)[1])))
			pa_print(a, b, instr);
		else
			sb_print(b, instr);
	}
}
