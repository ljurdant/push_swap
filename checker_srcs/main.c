/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:05:19 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:12:17 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_message(t_table *a)
{
	ft_putendl_fd("Error", 2);
	if (a->table)
		free(a->table);
	free(a);
	return (0);
}

int	main(int ac, char **ag)
{
	t_table	*a;
	t_list	*instr;

	if (ac < 2)
		return (0);
	if (!(a = malloc(sizeof(t_table))))
		return (0);
	if (!(a->table = parse_a(ac, ag)))
		return (error_message(a));
	a->size = ac - 1;
	instr = parse_instr();
	if (instr && !(check_line(instr->content)))
	{
		ft_lstclear(&instr, del);
		return (error_message(a));
	}
	exec_instr(a, instr);
	ft_lstclear(&instr, del);
	return (0);
}
