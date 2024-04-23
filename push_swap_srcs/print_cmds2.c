/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cmds2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:29:49 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:30:15 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_print(t_table *a, t_list **instr)
{
	t_list	*new;

	ra(a);
	new = ft_lstnew("ra");
	ft_lstadd_back(instr, new);
}

void	rra_print(t_table *a, t_list **instr)
{
	t_list	*new;

	rra(a);
	new = ft_lstnew("rra");
	ft_lstadd_back(instr, new);
}

void	rb_print(t_table *b, t_list **instr)
{
	t_list	*new;

	rb(b);
	new = ft_lstnew("rb");
	ft_lstadd_back(instr, new);
}

void	rrb_print(t_table *b, t_list **instr)
{
	t_list	*new;

	rrb(b);
	new = ft_lstnew("rrb");
	ft_lstadd_back(instr, new);
}
