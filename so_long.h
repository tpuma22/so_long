/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:24:15 by tpuma             #+#    #+#             */
/*   Updated: 2022/12/03 17:08:09 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include "srcs/gnl/get_next_line.h"
# include <sys/errno.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

typedef struct s_map
{
	char	**ber;
	int		width;
	int		height;
}t_map;

typedef struct s_position
{
	int			x;
	int			y;
}t_position;

typedef struct s_open_window
{
	void		*ref;
	t_position	size;
}t_open_window;

typedef struct s_game
{
	void	*mlx;
	void	*new_win;
}t_game;

#endif
