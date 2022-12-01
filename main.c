/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:24:10 by tpuma             #+#    #+#             */
/*   Updated: 2022/12/01 18:12:06 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
#include "mlx/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*reference;

	mlx = mlx_init();
	reference = mlx_new_window(mlx, \
		1000, 600, "so_long");
	mlx_loop(mlx);
}
