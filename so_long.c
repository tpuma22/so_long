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

int	key_hook(int keycode, t_game *game)
{
/* 	(void)game; */
	if (keycode == 53)
	{
		printf("key_hook:%d\n", keycode);
		mlx_destroy_window(game->mlx, game->new_win);
		mlx_destroy(game->mlx);
		game->mlx = NULL;
		exit(0);
	}
	return (0);
}

int	main(void)
{
	t_game	game;
	/*--------FUNCIÓN-ABRIR VENTANA---------- */
	game.mlx = mlx_init();
	game.new_win = mlx_new_window(game.mlx, \
		1000, 600, "so_long");
	/*--------FUNCIÓN ABRIR MAPA DE TAMAÑO = A VENTANA---------- */	  
	//falta crear la función ft_get_map/ft_check_map/ft_check_char_map


	// game.new_win = mlx_new_window(game.mlx, \
	// 	game.map->height * 64, game.map->width * 64, "so_long");
	// game.window.size.x = game.map->width * 64;
	// game.window.size.y = game.map->height * 64;

	
	/*--------FUNCIÓN-PASAR KEYCODE---------- */
	mlx_key_hook(game.new_win, key_hook, &game);
	mlx_loop(game.mlx);
	return (0);
}
