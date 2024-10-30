/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:35:31 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 06:55:40 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extra.h"

size_t	ft_count_lines(const char *str)
{
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str == '\n')
			count++;
		str++;
	}
	if (*(str - 1) != '\n' && *(str - 1) != '\0')
		count++;
	return (count);
}
