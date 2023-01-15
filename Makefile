# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 14:57:57 by jcaron            #+#    #+#              #
#    Updated: 2023/01/15 18:21:25 by jcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# files

SRC			=	./src/init_stack.c			\
				./src/main.c				\
				./src/parse.c				\
				./src/moove/rot.c			\
				./src/moove/swap.c			\
				./src/moove/push.c			\
				./src/error.c

INC_D		=	./include/

NAME		=	push_swap

OBJ 		=	$(SRC:%.c=%.o)

# compilation

CC			=	clang
CFLAG		=	-Wall -Wextra -Werror

#dependencies library
INC_LIB		=	./libft/
LIBFLAG		=	-L./libft -lft

%.o: %.c
	@$(CC) $(CFLAG) -I$(INC_D) -I$(INC_LIB) -c $< -o $@
	@echo "***compilation of '$<' in '$@'***"

all: $(NAME)

libft:
	@git submodule update --remote
	@(cd libft && make)
	@echo "***compilation of library libft***"

$(NAME): libft $(OBJ)
	
	@$(CC) $(OBJ) -o $(NAME) $(LIBFLAG)
	@echo "***compilation of $(NAME)***"


clean:
	@rm -f $(OBJ) 
	@echo "***delation of all objects files***"

fclean: clean
	@rm -f $(NAME)
	@echo "***deletion of binary '$(NAME)'***"

re: fclean all

.PHONY: all clean fclean re libft
