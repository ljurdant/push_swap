/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rest_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:20:54 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:21:52 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_list(void *content)
{
	content = NULL;
	(void)content;
}

t_table	*init_a2(t_table *a)
{
	t_table	*a2;
	int		i;

	i = 0;
	if (!(a2 = malloc(sizeof(t_table))))
		return (NULL);
	a2->size = a->size;
	if (!(a2->table = malloc(sizeof(int) * a2->size)))
		return (NULL);
	while (i < a2->size)
	{
		(a2->table)[i] = (a->table)[i];
		i++;
	}
	return (a2);
}

void	rest_sort(t_table *a, t_table *b, t_list **instr)
{
	t_table *a2;
	t_list	*instr2;

	a2 = init_a2(a);
	if (!(instr2 = malloc(sizeof(t_list))))
		return ;
	instr2 = NULL;
	sorter(a, b, insertion_sort, instr);
	best_sort(a2, b, &instr2);
	if (ft_lstsize(instr2) < ft_lstsize(*instr))
	{
		ft_lstclear(instr, del_list);
		*instr = instr2;
		if (!(instr2 = malloc(sizeof(t_list))))
			return ;
		instr2 = NULL;
	}
	else
		ft_lstclear(&instr2, del_list);
}
