/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:47:27 by tpuma             #+#    #+#             */
/*   Updated: 2022/10/23 10:16:53 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
/* Forma de definir una variable, la estructura es como un "if" interno */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

# include<stdio.h>
# include<unistd.h>
# include<ctype.h>
# include<stdlib.h> /* Funciones de ficheros, Funciones write() y close()*/
# include<string.h>
# include<stddef.h>
# include<sys/types.h>
# include<sys/stat.h>
# include <fcntl.h> /* Modos de apertura y función open()*/
# include<errno.h>
# include <stdarg.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
/* Forma de definir una variable, usando el "if" previamente abierto*/
# define FILES_MAX 4096

size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);

#endif
