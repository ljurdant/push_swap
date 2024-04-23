/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort_rotaters.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:48:06 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:48:08 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		condition(t_table *b, int n, t_table *tmp)
{
	if (b->size >= 2 && n < ft_min(b))
		return (tmp->table[tmp->size - 1] != ft_min(tmp));
	else if (b->size >= 2 && n > ft_max(b))
		return (tmp->table[0] != ft_max(tmp));
	else
		return (tmp->size >= 2 &&
			!(tmp->table[0] <= n && tmp->table[tmp->size - 1] >= n));
}

int		rotate(t_table *a, t_table *b, void (*rot)(t_table *b))
{
	t_table	*tmp;
	int		count;
	int		n;

	tmp = copy_b(b);
	count = 0;
	n = a->table[0];
	while (condition(b, n, tmp))
	{
		rot(tmp);
		count++;
	}
	free(tmp->table);
	free(tmp);
	return (count);
}

int		double_rotate(t_table *a, t_table *b,
void (*rot)(t_table *a, t_table *b))
{
	t_table	*tmp_a;
	t_table	*tmp_b;
	int		count;
	int		n;

	tmp_a = copy_b(a);
	tmp_b = copy_b(b);
	count = 0;
	n = a->table[0];
	while (count < b->size && condition(b, n, tmp_b))
	{
		rot(tmp_a, tmp_b);
		n = tmp_a->table[0];
		count++;
	}
	free(tmp_a->table);
	free(tmp_a);
	free(tmp_b->table);
	free(tmp_b);
	return (count);
}

int		rotate_a(t_table *a, void (*rot)(t_table *a))
{
	t_table	*tmp;
	int		count;

	tmp = copy_b(a);
	count = 0;
	while (!check(tmp))
	{
		rot(tmp);
		count++;
	}
	free(tmp->table);
	free(tmp);
	return (count);
}
