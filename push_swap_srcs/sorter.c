/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:17:45 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/13 20:38:34 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_instr(t_list *instr)
{
	t_list *iter;

	iter = instr;
	while (iter)
	{
		ft_putendl_fd(iter->content, STDOUT_FILENO);
		iter = iter->next;
	}
	ft_lstclear(&instr, del_list);
}

void	sorter(t_table *a, t_table *b, void (*s)(t_table *a, t_table *b
, t_list **instr), t_list **instr)
{
	while (!checker(a, b))
		s(a, b, instr);
}

void	sort(t_table *a)
{
	t_list	*instr;
	t_table	*b;

	if (!(b = malloc(sizeof(t_table))))
		return ;
	b->table = NULL;
	b->size = 0;
	instr = NULL;
	if (a->size < 3)
		two_sort(a, &instr);
	else if (a->size == 3)
		three_sort(a, b, &instr);
	else if (a->size <= 5)
		five_sort(a, b, &instr);
	else if (a->size < 90)
		rest_sort(a, b, &instr);
	else
		best_sort(a, b, &instr);
	if (b->table)
		free((b->table));
	free(b);
	print_instr(instr);
}
