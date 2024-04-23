NAME =	push_swap

FLAGS = -Wall -Wextra -Werror -I.

SRCS =		parse_a.c\
			get_next_line.c\
			swap.c\
			push.c\
			rotate.c\
			r_rotate.c\
			checker.c\

SRCS_CHECKER =	checker_srcs/main.c\
				checker_srcs/parse_instr.c\
				checker_srcs/exec_instr.c\
				

SRCS_PUSH_SWAP = 	push_swap_srcs/main.c\
					push_swap_srcs/bubble_sort.c\
					push_swap_srcs/sorter.c\
					push_swap_srcs/selection_sort.c\
					push_swap_srcs/print_cmds1.c\
					push_swap_srcs/print_cmds2.c\
					push_swap_srcs/print_cmds3.c\
					push_swap_srcs/insertion_sort.c\
					push_swap_srcs/insertion_sort_rotaters.c\
					push_swap_srcs/maths.c\
					push_swap_srcs/best_sort.c\
					push_swap_srcs/three_sort.c\
					push_swap_srcs/rest_sort.c


OBJS =				${SRCS:.c=.o}
OBJS_CHECKER =		${SRCS_CHECKER:.c=.o}
OBJS_PUSH_SWAP =	${SRCS_PUSH_SWAP:.c=.o}

LIBS = libft/libft.a

all : 			$(NAME)

%.o: %.c 
	gcc $(FLAGS) -c $< -o $@

$(NAME) :	$(OBJS) $(OBJS_PUSH_SWAP) checker
			$(MAKE) -C ./libft/. bonus
			gcc $(OBJS) $(OBJS_PUSH_SWAP) $(LIBS) -o $(NAME)

checker :	$(OBJS) $(OBJS_CHECKER)
			$(MAKE) -C ./libft/. bonus
			gcc $(OBJS) $(OBJS_CHECKER) $(LIBS) -o checker

clean	: 
				rm -f $(OBJS) $(OBJS_CHECKER) $(OBJS_PUSH_SWAP)
				$(MAKE) -C ./libft/. clean

fclean  :		clean
				$(MAKE) -C ./libft/. fclean
				rm -rf checker
				rm -rf push_swap
		

re	  : 		fclean all

.PHONY  : 		all fclean re
