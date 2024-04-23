/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:51:23 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/13 21:01:53 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rot_a(t_table *a, int mean, void (*rot)(t_table *a))
{
	t_table	*tmp;
	int		count;

	tmp = copy_b(a);
	count = 0;
	while (tmp->table[0] > mean)
	{
		rot(tmp);
		count++;
	}
	free(tmp->table);
	free(tmp);
	return (count);
}

int		mean_check(t_table *a, int mean)
{
	int i;

	i = 0;
	while (i < a->size)
	{
		if (a->table[i] < mean)
			return (0);
		i++;
	}
	return (1);
}

void	chunk(int mean, t_table *a, t_table *b, t_list **instr)
{
	int count1;
	int count2;

	while (!mean_check(a, mean))
	{
		count1 = rot_a(a, mean, ra);
		count2 = rot_a(a, mean, rra);
		if (count1 < count2)
			while (count1--)
				ra_print(a, instr);
		else
			while (count2--)
				rra_print(a, instr);
		insertion_sort(a, b, instr);
	}
}

void	best_sort(t_table *a, t_table *b, t_list **instr)
{
	t_chunks chunks;

	if (checker(a, b))
		return ;
	chunks.one = fmean(a, 0.1, fstd_dev2);
	chunks.two = fmean(a, 0.2, fstd_dev2);
	chunks.three = fmean(a, 0.3, fstd_dev2);
	chunks.four = fmean(a, 0.4, fstd_dev2);
	chunks.five = fmean(a, 0.5, fstd_dev2);
	chunks.six = fmean(a, 0.6, fstd_dev2);
	chunks.seven = fmean(a, 0.7, fstd_dev2);
	chunks.eight = fmean(a, 0.8, fstd_dev2);
	chunks.nine = fmean(a, 0.9, fstd_dev2);
	chunk(chunks.one, a, b, instr);
	chunk(chunks.two, a, b, instr);
	chunk(chunks.three, a, b, instr);
	chunk(chunks.four, a, b, instr);
	chunk(chunks.five, a, b, instr);
	chunk(chunks.six, a, b, instr);
	chunk(chunks.seven, a, b, instr);
	chunk(chunks.eight, a, b, instr);
	chunk(chunks.nine, a, b, instr);
	sorter(a, b, insertion_sort, instr);
}
