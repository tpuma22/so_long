# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 14:12:19 by tpuma             #+#    #+#              #
#    Updated: 2022/12/03 16:05:15 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -----------VARIABLES----------

NAME = so_long
SRC_DIR = srcs
CSRC =	main.c		\
		so_long.c	\

INCLUDES = so_long.h

OSRC = $(CSRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g3
GCCCMD = gcc
# Colours code
CYAN = "\\x1b[36m"
MAGENTA = "\\x1b[35m"
YELLOW = "\\x1b[33m"
GREEN = "\\x1b[32m"
RESET = "\\x1b[37m"
# -----------REGLASS----------
%.o: %.c
	@make -C mlx
	@$(GCCCMD) $(CFLAGS) -Imlx -c $^ -o $@
	@echo "$(MAGENTA)Compilation mlx finished$(RESET)"

$(NAME): $(OSRC)
	@$(GCCCMD) $(CFLAGS) -Imlx -Iso_long.h -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

# -----------FUNCIONES----------

all: $(NAME)

clean:
	@make -C mlx/ clean
	@rm -f $(OSRC)

	@echo "$(GREEN)cleaning finished$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(GREEN)forced cleaning finished$(RESET)"

re: fclean all

.PHONY: all clean fclean re
