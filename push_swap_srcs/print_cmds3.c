/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cmds3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:29:16 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:29:29 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_print(t_table *a, t_table *b, t_list **instr)
{
	t_list	*new;

	rr(a, b);
	new = ft_lstnew("rr");
	ft_lstadd_back(instr, new);
}

void	rrr_print(t_table *a, t_table *b, t_list **instr)
{
	t_list	*new;

	rrr(a, b);
	new = ft_lstnew("rrr");
	ft_lstadd_back(instr, new);
}
