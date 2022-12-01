/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:21:30 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/21 11:38:44 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *chain)
{
	int	i;

	i = 0;
	if (chain == NULL)
		return (ft_print_str("(null)"));
	while (chain[i] != '\0')
	{
		write (1, &chain[i], 1);
		i++;
	}
	return (i);
}
