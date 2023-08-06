/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:24:10 by tpuma             #+#    #+#             */
/*   Updated: 2022/12/11 18:14:39 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "so_long.h"

int	key_hook(int keycode, t_game *game)
{
 	(void)game;
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
	--------FUNCIÓN-ABRIR VENTANA----------
	game.mlx = mlx_init();
	game.new_win = mlx_new_window(game.mlx, \
		1000, 600, "so_long");
	--------FUNCIÓN-PASAR KEYCODE----------
	mlx_key_hook(game.new_win, key_hook, &game);
	mlx_loop(game.mlx);
	return (0);
} */
