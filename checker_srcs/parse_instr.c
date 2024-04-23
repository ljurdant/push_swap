/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_instr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:15:08 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 19:16:04 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(void *content)
{
	if (content)
		free(content);
}

int		check_line(char *line)
{
	if (!line || !ft_strncmp("sa\0", line, 3) || !ft_strncmp("sb\0", line, 3)
			|| !ft_strncmp("pa\0", line, 3) || !ft_strncmp("pb\0", line, 3)
			|| !ft_strncmp("ra\0", line, 3) || !ft_strncmp("rb\0", line, 3)
			|| !ft_strncmp("rra\0", line, 4) || !ft_strncmp("rrb\0", line, 4)
			|| !ft_strncmp("rr\0", line, 3) || !ft_strncmp("rrr\0", line, 4))
		return (1);
	return (0);
}

t_list	*parse_instr(void)
{
	char	*line;
	t_list	*instr;
	t_list	*start;

	start = NULL;
	while (get_next_line(STDIN_FILENO, &line))
	{
		instr = ft_lstnew(line);
		ft_lstadd_back(&start, instr);
		if (!check_line(line))
			return (instr);
	}
	return (start);
}
