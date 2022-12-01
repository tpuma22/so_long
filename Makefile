# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:10:41 by tpuma             #+#    #+#              #
#    Updated: 2022/12/01 18:09:41 by tpuma            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CSRC =	main.c

OSRC = $(CSRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g3
GCCCMD = gcc

all: $(NAME)

%.o: %.c
	make -C mlx
	$(GCCCMD) $(CFLAGS) -Imlx -c $^ -o $@

$(NAME): $(OSRC)
	$(GCCCMD) $(CFLAGS) -Imlx -Iso_long.h -Lmlx -lmlx -framework OpenGL -framework AppKit $^ -o $@

clean:
	make -C mlx/ clean
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
