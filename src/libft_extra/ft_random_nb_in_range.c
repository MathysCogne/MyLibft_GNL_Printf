/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_nb_in_range.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:27:40 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 06:55:53 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_extra.h"

size_t	get_random_index_in_range(size_t a, size_t b)
{
	size_t	range;
	size_t	random_nb;

	if (a >= b)
		return (0);
	range = b - a + 1;
	random_nb = generate_random_nb() % range;
	return (a + random_nb);
}
