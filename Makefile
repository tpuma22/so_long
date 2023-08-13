# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 14:12:19 by tpuma             #+#    #+#              #
#    Updated: 2022/12/11 18:26:27 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRC_DIR = srcs
CSRC =	so_long.c							\
		main.c								\
		srcs/gnl/get_next_line_utils.c		\
		srcs/gnl/get_next_line.c			\
		srcs/libft/ft_memset.c				\
		srcs/libft/ft_memmove.c				\
		srcs/libft/ft_strlcat.c 			\
		srcs/libft/ft_calloc.c				\
		srcs/libft/ft_split.c				\
		srcs/libft/ft_strjoin_2.c				\

#INCLUDES = so_long.h

OSRC = $(CSRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra #-g3
CC = gcc

# Colours code
CYAN = "\\x1b[36m"
MAGENTA = "\\x1b[35m"
YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"

# -----------REGLASS----------
all: $(NAME)

$(NAME): $(OSRC) 
#@$(CC) $(CFLAGS) $(INCLUDES) -Imlx -Iso_long.h -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@
	@$(CC) $(CFLAGS)  -lmlx -framework OpenGL -framework AppKit $(CSRC) -o $(NAME)

%.o: %.c
#@make -C mlx
#@$(CC) $(CFLAGS) -Imlx -c $^ -o $@
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "$(MAGENTA)Compilation mlx finished$(RESET)"
	
# -----------FUNCIONES----------

clean:
	@make -C mlx/ clean
	@make -C srcs/libft clean
	@rm -rf $(OSRC)

	@echo "$(GREEN)SO_LONG: cleaning finished$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)SO_LONG: forced cleaning finished$(RESET)"

re: fclean all

.PHONY: all clean fclean re
