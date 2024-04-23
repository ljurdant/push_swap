/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cmds1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:30:32 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:31:15 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_print(t_table *a, t_list **instr)
{
	t_list	*new;

	sa(a);
	new = ft_lstnew("sa");
	ft_lstadd_back(instr, new);
}

void	sb_print(t_table *b, t_list **instr)
{
	t_list	*new;

	sb(b);
	new = ft_lstnew("sb");
	ft_lstadd_back(instr, new);
}

void	ss_print(t_table *a, t_table *b, t_list **instr)
{
	t_list	*new;

	ss(a, b);
	new = ft_lstnew("ss");
	ft_lstadd_back(instr, new);
}

void	pa_print(t_table *a, t_table *b, t_list **instr)
{
	t_list *new;

	pa(a, b);
	new = ft_lstnew("pa");
	ft_lstadd_back(instr, new);
}

void	pb_print(t_table *a, t_table *b, t_list **instr)
{
	t_list *new;

	pb(a, b);
	new = ft_lstnew("pb");
	ft_lstadd_back(instr, new);
}
