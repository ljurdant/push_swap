/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:00:08 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:00:10 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_table *a)
{
	int buf;

	if (a->size < 2)
		return ;
	buf = (a->table)[0];
	(a->table)[0] = (a->table)[1];
	(a->table)[1] = buf;
}

void	sb(t_table *b)
{
	int buf;

	if (b->size < 2)
		return ;
	buf = (b->table)[0];
	(b->table)[0] = (b->table)[1];
	(b->table)[1] = buf;
}

void	ss(t_table *a, t_table *b)
{
	sa(a);
	sb(b);
}
