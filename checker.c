/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:46:01 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:46:05 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check(t_table *a)
{
	int i;

	i = 0;
	while (i < a->size - 1)
	{
		if ((a->table)[i] > (a->table)[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		checker(t_table *a, t_table *b)
{
	if (b->size)
		return (0);
	return (check(a));
}

void	print_end(t_table *a, t_table *b)
{
	if (checker(a, b))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}
