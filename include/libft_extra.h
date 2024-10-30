/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_extra.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:45:21 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/30 06:54:39 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EXTRA_H
# define LIBFT_EXTRA_H

# include "libft.h"

/*************** LIBFT EXTRA ****************/
size_t	get_random_index_in_range(size_t a, size_t b);
size_t	generate_random_nb(void);
size_t	ft_count_lines(const char *str);
size_t	count_worlds(const char *str, char sep);
size_t	ft_count_lines(const char *str);
int		ft_abs(int nb);
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size);

#endif