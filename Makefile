# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 14:57:57 by jcaron            #+#    #+#              #
#    Updated: 2023/01/13 17:53:01 by jcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# files

SRC			=	./utils/str_is_digit.c		\
				./utils/ft_calloc.c			\
				./utils/ft_strcmp.c			\
				./utils/ft_isdigit.c		\
				./utils/ft_strlen.c			\
				./utils/ft_atoi.c			\
				./utils/ft_isspace.c		\
				./src/init_stack.c			\
				./src/main.c				\
				./src/parse.c				\
				./src/moove/rot.c			\
				./src/moove/swap.c			\
				./src/moove/push.c			\
				./src/error.c

INC_D		=	./include/

NAME		=	push_swap

# compilation

CC			=	clang
CFLAG		=	-Wall -Wextra -Werror
LIBFLAG		=	-I./libft -L.libft -lft
LIBFT		=	./libft/libft.a
OBJ 		=	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	
	@$(CC) $(OBJ) -o $(NAME)
	@echo "***compilation of '$<' in '$@'***"

%.o: %.c $(INC_D)*.h Makefile
	@$(CC) $(CFLAG) -I$(INC_D) -c $< -o $@
	@echo "***compilation of '$<' in '$@'***"

clean:
	@rm -f $(OBJ) 
	@echo "***delation of all objects files***"

fclean: clean
	@rm -f $(NAME)
	@echo "***deletion of binary '$(NAME)'***"

re: fclean all

debug: CFLAG += -Weverything -g3
debug: fclean $(OBJ)
	$(CC) -fsanitize=address $(OBJ) -o $(NAME)

.PHONY: all clean fclean re debug
