/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_random_nb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:48:31 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 06:55:28 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extra.h"

size_t	generate_random_nb(void)
{
	static size_t	seed;

	if (!seed)
		seed = 1;
	seed = seed * 1103515245 + 12345;
	return ((seed / 655365) % 32768);
}
