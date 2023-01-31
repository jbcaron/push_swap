# *************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 14:57:57 by jcaron            #+#    #+#              #
#    Updated: 2023/01/31 19:27:32 by jcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# files

SRC			=	./src/init_stack.c			\
				./src/main.c				\
				./src/tab_to_index.c		\
				./src/push_by_chunk.c		\
				./src/bubble_sort.c			\
				./src/parse.c				\
				./src/backtracking.c		\
				./src/sort_core.c			\
				./src/move/rot.c			\
				./src/move/swap.c			\
				./src/move/push.c			\
				./src/move/move_all_1.c		\
				./src/move/move_all_2.c		\
				./src/move/move_all_3.c		\
				./src/stack_is_order.c		\
				./src/error.c

INC_D		=	./include/

NAME		=	push_swap

OBJ 		=	$(SRC:%.c=%.o)

# compilation

CC			=	clang
CFLAG		=	-Wall -Wextra -Werror -O2

# dependencies library
INC_LIB		=	./libft/
LIBFLAG		=	-L./libft -lft

%.o: %.c
	@$(CC) $(CFLAG) -I$(INC_D) -I$(INC_LIB) -c $< -o $@
	@echo "***compilation of '$<' in '$@'***"

all: $(NAME)

libft:
	@(cd ./libft && make)

$(NAME): libft $(OBJ)
	
	@$(CC) $(OBJ) $(CFLAG) -o $(NAME) $(LIBFLAG)
	@echo "***compilation of $(NAME)***"


clean:
	@rm -f $(OBJ) 
	@echo "***delation of all objects files***"

fclean: clean
	@rm -f $(NAME)
	@echo "***deletion of binary '$(NAME)'***"

re: fclean all

.PHONY: all clean fclean re libft
