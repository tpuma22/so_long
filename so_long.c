/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:42:37 by tpuma             #+#    #+#             */
/*   Updated: 2022/12/11 18:13:50 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx/mlx.h"
#include <sys/errno.h>
#include <stdio.h>

/* int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_game(argv[1]);
	else
	{
		ft_print_perror("Error", 22);
		exit(2);
	}
	exit(0);
	return (0);
} */

void	ft_read_map(t_game *game, char *ber)
{
	char	*str_map;
	char	*line;
	int		fd;
/*--------RESERVO MEMORIA PARA MI MAPA---------- */
	game->map = ft_calloc(1, sizeof(t_map));
/*--------ABRO EL MAPA, LEO LA 1º LÍNEA Y A GUARDO EN str_map---------- */
	fd = open(ber, O_RDONLY);
	line =get_next_line(fd);
	str_map = 0;
	str_map = ft_strjoin(line, "");
/*--------LEO 2º LÍNEA, LA PEGO EN str_map QUE CONTIENE LA 1º LÍNEA, Y CON UN LOOP RECOSNTRUYO EL MAPA ENTERO---------- */
	line =get_next_line(fd);
	while (line)
	{
		str_map = ft_strjoin(str_map, line);
		free(line);
		line =get_next_line(fd);
	}
	(game->map)->ber = ft_split(str_map, '\n');
/* 	if (!str_map || ft_check_map(game))
	{
		if (str_map)
			ft_free_map(&game->map);
		free(str_map);
		ft_exit_game_error("Error: Wrong map");
	} */
	free(str_map);
}

int ft_close(t_game *game)
{
	if (!game)
		exit(1);
	exit(1);
}

int	key_hook(int keycode, t_game *game)
{
/* 	(void)game; */
	if (keycode == 53)
	{
		printf("key_hook:%d\n", keycode);
		// mlx_destroy_window(game->mlx, game->new_win);
		// mlx_destroy(game->mlx);
		mlx_hook(game->new_win, 17, (1L << 17), ft_close, game);
		game->mlx = NULL;
		exit(0);
	}
	return (0);
}

int	main(void)
{
	t_game	game;

	/* argc = 0; */
	/*--------FUNCIÓN-ABRIR VENTANA---------- */
	game.mlx = mlx_init();
	game.new_win = mlx_new_window(game.mlx, \
		1000, 600, "so_long");
	/*--------FUNCIÓN ABRIR MAPA DE TAMAÑO = A VENTANA---------- */	  
/* 	falta crear la función ft_read_map/ft_check_map/ft_check_char_map */
	
	
/* 	ft_read_map(&game, *argv);
	game.mlx = mlx_init();
	game.new_win = mlx_new_window(game.mlx, \
		game.map->height * 64, game.map->width * 64, "so_long");
	game.window.size.x = game.map->width * 64;
	game.window.size.y = game.map->height * 64; */

	
	/*--------FUNCIÓN-PASAR KEYCODE---------- */
	mlx_key_hook(game.new_win, key_hook, &game);
	mlx_loop(game.mlx);
	return (0);
}
