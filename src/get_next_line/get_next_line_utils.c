/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:14:35 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 05:29:05 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	extract_line(int fd, char **line, char **remaind)
{
	char	*buffer;
	int		read_s;
	int		pos;

	read_s = 1;
	while (read_s > 0)
	{
		read_s = ft_read(fd, &buffer);
		if (read_s == -1)
			return (-1);
		pos = find_end_line(line, buffer);
		if (pos > 0)
		{
			if (*remaind)
				free(*remaind);
			*remaind = ft_strdup(buffer + pos);
			free(buffer);
			return (1);
		}
		free(buffer);
	}
	if (**line)
		return (1);
	return (read_s);
}
