/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:34:42 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:34:59 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **ag)
{
	t_table *a;

	if (ac < 2)
		return (0);
	if (!(a = malloc(sizeof(t_table))))
		return (0);
	if (!(a->table = parse_a(ac, ag)))
	{
		free(a);
		ft_putendl_fd("Error", 2);
		return (0);
	}
	a->size = ac - 1;
	sort(a);
	free(a->table);
	free(a);
	return (0);
}
