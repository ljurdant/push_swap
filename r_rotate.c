/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:55:57 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:56:42 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_table *a)
{
	int tmp;
	int i;

	if (a->size < 2)
		return ;
	i = 0;
	tmp = (a->table)[0];
	while (i < a->size - 1)
	{
		(a->table)[i] = (a->table)[i + 1];
		i++;
	}
	(a->table)[i] = tmp;
}

void	rb(t_table *b)
{
	int tmp;
	int i;

	if (b->size < 2)
		return ;
	i = 0;
	tmp = (b->table)[0];
	while (i < b->size - 1)
	{
		(b->table)[i] = (b->table)[i + 1];
		i++;
	}
	(b->table)[i] = tmp;
}

void	rrr(t_table *a, t_table *b)
{
	rra(a);
	rrb(b);
}
