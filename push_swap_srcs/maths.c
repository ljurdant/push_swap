/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:31:57 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:34:23 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	fstd_dev2(t_table *a, int n, float pos)
{
	int j;
	int count;

	j = 0;
	count = 0;
	while (j < a->size)
	{
		if (a->table[j] < n)
			count++;
		j++;
	}
	return (ft_abs(a->size * pos - count));
}

int	fmean(t_table *a, float pos, int (*fpos)(t_table *a, int n, float pos))
{
	int i;
	int std_dev;
	int mean;

	i = 0;
	std_dev = a->size;
	mean = a->table[0];
	while (i < a->size)
	{
		if (fpos(a, a->table[i], pos) <= std_dev)
		{
			std_dev = fpos(a, a->table[i], pos);
			mean = a->table[i];
		}
		i++;
	}
	return (mean);
}

int	ft_max(t_table *a)
{
	int i;
	int n;

	i = 0;
	n = a->table[0];
	while (i < a->size)
	{
		if ((a->table)[i] > n)
			n = a->table[i];
		i++;
	}
	return (n);
}

int	ft_min(t_table *a)
{
	int i;
	int n;

	i = 0;
	n = a->table[0];
	while (i < a->size)
	{
		if ((a->table)[i] < n)
			n = a->table[i];
		i++;
	}
	return (n);
}
