/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:47:33 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:54:58 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	paste_dst(int **tmp_a, t_table *a)
{
	int	i;

	i = 1;
	while (i < a->size)
	{
		(*tmp_a)[i] = (a->table)[i - 1];
		i++;
	}
}

void	paste_src(int **tmp_b, t_table *b)
{
	int	i;

	i = 0;
	while (i < b->size)
	{
		(*tmp_b)[i] = (b->table)[i + 1];
		i++;
	}
}

void	pa(t_table *a, t_table *b)
{
	int *tmp_a;
	int *tmp_b;

	if (!(b->size))
		return ;
	(a->size)++;
	(b->size)--;
	if (!(tmp_a = malloc(sizeof(int) * (a->size))))
		return ;
	tmp_a[0] = (b->table)[0];
	paste_dst(&tmp_a, a);
	if (a->table)
		free(a->table);
	a->table = tmp_a;
	if (!(tmp_b = malloc(sizeof(int) * (b->size))))
		return ;
	paste_src(&tmp_b, b);
	free(b->table);
	(b->table) = tmp_b;
}

void	pb(t_table *a, t_table *b)
{
	int *tmp_a;
	int *tmp_b;

	if (!(a->size))
		return ;
	(b->size)++;
	(a->size)--;
	if (!(tmp_b = malloc(sizeof(int) * (b->size))))
		return ;
	tmp_b[0] = (a->table)[0];
	paste_dst(&tmp_b, b);
	if (b->table)
		free(b->table);
	(b->table) = tmp_b;
	if (!(tmp_a = malloc(sizeof(int) * (a->size))))
		return ;
	paste_src(&tmp_a, a);
	free(a->table);
	(a->table) = tmp_a;
}
