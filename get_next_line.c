/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:46:38 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/08 18:46:40 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_strkpy(char *dst, char *src)
{
	int i;

	i = 0;
	if (!dst || !src)
		return ;
	while (i <= (int)ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	free(src);
}

void	init_values(char **ret, char **tmp, char (*buf)[1], int *size)
{
	*size = 1;
	*tmp = NULL;
	*ret = NULL;
	(*buf)[0] = 0;
}

int		get_next_line(int fd, char **line)
{
	char	buf[1];
	char	*tmp;
	char	*ret;
	int		size;
	int		r;

	init_values(&ret, &tmp, &buf, &size);
	while ((r = read(fd, buf, 1)) > 0 && buf[0] != '\n')
	{
		if (!(tmp = malloc(sizeof(char) * (size + 1))))
			return (-1);
		ft_strkpy(tmp, ret);
		tmp[size - 1] = *buf;
		tmp[size] = '\0';
		if (!(ret = malloc(sizeof(char) * (size + 1))))
			return (-1);
		ft_strkpy(ret, tmp);
		size++;
	}
	*line = (ret ? ft_strdup(ret) : ret);
	if (ret)
		free(ret);
	if ((buf[0] == '\n' && size == 1))
		return (0);
	return (r);
}
