/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_instr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:02:03 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:09:26 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate(char *content, t_table *a, t_table *b)
{
	if (!ft_strncmp("sa\0", content, 3))
		sa(a);
	else if (!ft_strncmp("sb\0", content, 3))
		sb(a);
	else if (!ft_strncmp("ss\0", content, 3))
		ss(a, b);
	else if (!ft_strncmp("pa\0", content, 3))
		pa(a, b);
	else if (!ft_strncmp("pb\0", content, 3))
		pb(a, b);
	else if (!ft_strncmp("ra\0", content, 3))
		ra(a);
	else if (!ft_strncmp("rb\0", content, 3))
		rb(b);
	else if (!ft_strncmp("rr\0", content, 3))
		rr(a, b);
	else if (!ft_strncmp("rra\0", content, 4))
		rra(a);
	else if (!ft_strncmp("rrb\0", content, 4))
		rrb(b);
	else if (!ft_strncmp("rrr\0", content, 4))
		rrr(a, b);
}

void	exec_instr(t_table *a, t_list *start)
{
	t_table	*b;
	t_list	*instr;

	if (!(b = malloc(sizeof(t_table))))
		return ;
	b->table = NULL;
	b->size = 0;
	instr = start;
	while (instr && instr->content)
	{
		operate(instr->content, a, b);
		instr = instr->next;
	}
	print_end(a, b);
	if (b->table)
		free(b->table);
	free(a->table);
	free(a);
	free(b);
}
