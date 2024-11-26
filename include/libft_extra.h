/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_extra.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:45:21 by mcogne--          #+#    #+#             */
/*   Updated: 2024/11/26 15:26:59 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_EXTRA_H
# define LIBFT_EXTRA_H

# include "libft.h"

# define CHAR_BIT 8
# define SCHAR_MIN (-128)
# define SCHAR_MAX 127
# define UCHAR_MAX 255
# define CHAR_MIN (-128)
# define CHAR_MAX 127

# define SHORT_MIN (-32768)
# define SHORT_MAX 32767
# define USHORT_MAX 65535

# define INT_MIN (-2147483648)
# define INT_MAX 2147483647
# define UINT_MAX 4294967295U

# define LONG_MIN (-9223372036854775808L)
# define LONG_MAX 9223372036854775807L
# define ULONG_MAX 18446744073709551615UL
# define LLONG_MIN (-9223372036854775808LL)
# define LLONG_MAX 9223372036854775807LL
# define ULLONG_MAX 18446744073709551615ULL

# define FLOAT_MAX 3.40282347E+38F
# define FLOAT_MIN 1.17549435E-38F
# define DBL_MAX 1.7976931348623157E+308
# define DBL_MIN 2.2250738585072014E-308
# define LDBL_MAX 1.18973149535723176502E+4932L
# define LDBL_MIN 3.36210314311209350626E-4932L

/*************** LIBFT EXTRA ****************/
size_t		get_random_index_in_range(size_t a, size_t b);
size_t		generate_random_nb(void);
size_t		ft_count_lines(const char *str);
size_t		count_worlds(const char *str, char sep);
size_t		ft_count_lines(const char *str);
int			ft_abs(int nb);
void		*ft_realloc(void *ptr, size_t old_size, size_t new_size);

long long	ft_atoll(const char *str);

#endif