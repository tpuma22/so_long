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
# include "srcs/libft/libft.h"
# include <sys/errno.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <sys/errno.h>
# include <stdarg.h>

// ========== structures ==========

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

typedef struct s_window
{
	void		*ref;
	t_position	size;
}t_window;

typedef struct s_image
{
	void	*collects;
	void	*player;
	void	*wall;
	void	*floor;
	void	*exit;
	int		width;
	int		height;
}	t_image;

typedef struct s_sprite
{
	void		*reference;
	char		*pixels;
	int			bits_per_pixel;
	int			line_size;
	int			endian;
	t_position	size;
}t_sprite;

typedef struct s_game
{
	void		*mlx;
	void		*new_win;
	t_map		*map;
	t_window	window;
	t_sprite	wall;
	t_sprite	floor;
	t_sprite	coin;
	t_sprite	exit;
	t_sprite	sprite;
	t_position	sprite_position;
	int			movements;
	int			coins;
}t_game;

// ========== map ==========

int ft_close(t_game *game);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	**ft_split(char const *s, char c);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
size_t	ft_strlen(const char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
