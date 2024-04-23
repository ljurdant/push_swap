/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:57:14 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:57:42 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_table *a)
{
	int tmp;
	int i;

	if (a->size < 2)
		return ;
	i = a->size - 1;
	tmp = (a->table)[a->size - 1];
	while (i > 0)
	{
		(a->table)[i] = (a->table)[i - 1];
		i--;
	}
	(a->table)[0] = tmp;
}

void	rrb(t_table *b)
{
	int tmp;
	int i;

	if (b->size < 2)
		return ;
	i = b->size - 1;
	tmp = (b->table)[b->size - 1];
	while (i > 0)
	{
		(b->table)[i] = (b->table)[i - 1];
		i--;
	}
	(b->table)[0] = tmp;
}

void	rr(t_table *a, t_table *b)
{
	ra(a);
	rb(b);
}
