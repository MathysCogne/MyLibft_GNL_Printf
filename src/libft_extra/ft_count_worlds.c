/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_worlds.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:44:03 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 07:02:19 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extra.h"

static short	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

size_t	count_worlds(const char *str, char sep)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	if (!str || !sep)
		return (0);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] && !is_sep(str[i], sep))
		{
			w++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
	}
	return (w);
}
