/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:47:00 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:47:13 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(int *a, int n, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (a[i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	ft_iszero(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	*parse_a(int ac, char **ag)
{
	int		*a;
	int		i;
	char	*itoa;

	if (!(a = malloc(sizeof(int) * (ac - 1))))
		return (NULL);
	i = 1;
	while (i < ac)
	{
		a[i - 1] = ft_atoi(ag[i]);
		itoa = ft_itoa(a[i - 1]);
		if ((!ft_iszero(ag[i]) && !a[i - 1]) || !ft_check(a, a[i - 1], i - 1)
		|| ft_strncmp(itoa, ag[i], ft_strlen(ag[i])))
		{
			free(a);
			free(itoa);
			return (NULL);
		}
		free(itoa);
		i++;
	}
	return (a);
}
