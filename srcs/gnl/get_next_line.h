/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:12 by tpuma             #+#    #+#             */
/*   Updated: 2022/10/22 18:42:16 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* # ifndef BUFFER_SIZE */
#  define BUFFER_SIZE 100000
/* # endif */

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
size_t	ft_strlen(const char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);

#endif
