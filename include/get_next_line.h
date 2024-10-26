/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:14:56 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/27 01:23:12 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/* DEBUG */
# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_read(int fd, char **buffer);
int		find_end_line(char **line, char *buffer);

int		extract_line(int fd, char **line, char **remaind);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

#endif