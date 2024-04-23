/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljurdant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:53:42 by ljurdant          #+#    #+#             */
/*   Updated: 2021/04/13 20:38:07 by ljurdant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "unistd.h"
# include "libft/libft.h"

typedef struct	s_table
{
	int	size;
	int	*table;
}				t_table;

typedef struct	s_chunks
{
	float	one;
	float	two;
	float	three;
	float	four;
	float	five;
	float	six;
	float	seven;
	float	eight;
	float	nine;
}				t_chunks;

int				*parse_a(int ac, char **ag);
int				get_next_line(int fd, char **line);
t_list			*parse_instr(void);
void			exec_instr(t_table *a, t_list *start);
void			sa(t_table *a);
void			sb(t_table *b);
void			ss(t_table *a, t_table *b);
void			pa(t_table *a, t_table *b);
void			pb(t_table *a, t_table *b);
void			ra(t_table *a);
void			rb(t_table *b);
void			rr(t_table *a, t_table *b);
void			rra(t_table *a);
void			rrb(t_table *b);
void			rrr(t_table *a, t_table *b);
void			print_end(t_table *a, t_table *b);
int				checker(t_table *a, t_table *b);
int				check(t_table *a);
void			bubble_sort(t_table *a, t_table *b, t_list **instr);
void			sort(t_table *a);
void			selection_sort(t_table *a, t_table *b, t_list **instr);
void			sa_print(t_table *a, t_list **instr);
void			sb_print(t_table *b, t_list **instr);
void			ss_print(t_table *a, t_table *b, t_list **instr);
void			pa_print(t_table *a, t_table *b, t_list **instr);
void			pb_print(t_table *a, t_table *b, t_list **instr);
void			ra_print(t_table *a, t_list **instr);
void			rra_print(t_table *a, t_list **instr);
void			rb_print(t_table *b, t_list **instr);
void			rrb_print(t_table *b, t_list **instr);
void			insertion_sort(t_table *a, t_table *b, t_list **instr);
int				ft_max(t_table *a);
int				ft_min(t_table *a);
int				fmean(t_table *a, float pos,
	int (*fpos)(t_table *a, int n, float pos));
int				fstd_dev2(t_table *a, int n, float pos);
int				ft_abs(int n);
void			rr_print(t_table *a, t_table *b, t_list **instr);
void			rrr_print(t_table *a, t_table *b, t_list **instr);
t_table			*copy_b(t_table *b);
void			sorter(t_table *a, t_table *b,
	void (*sortl)(t_table *a, t_table *b, t_list **instr), t_list **instr);
void			best_sort(t_table *a, t_table *b, t_list **instr);
void			three_sort(t_table *a, t_table *b, t_list **instr);
void			five_sort(t_table *a, t_table *b, t_list **instr);
void			rest_sort(t_table *a, t_table *b, t_list **instr);
void			del_list(void *content);
int				check_line(char *line);
void			del(void *content);
int				rotate(t_table *a, t_table *b, void (*rot)(t_table *b));
int				double_rotate(t_table *a, t_table *b,
	void (*rot)(t_table *a, t_table *b));
int				rotate_a(t_table *a, void (*rot)(t_table *a));
void			two_sort(t_table *a, t_list **instr);

#endif
