/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:42:37 by tpuma             #+#    #+#             */
/*   Updated: 2022/12/01 19:11:13 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
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
}