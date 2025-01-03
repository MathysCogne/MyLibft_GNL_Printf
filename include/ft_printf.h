/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:20 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/31 23:28:43 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

/*************** DICTIONARY ***************/
# define SINGLE_CHAR	'c'
# define STRING			's'
# define DECIMAL		'd'
# define INTEGER		'i'
# define U_INTEGER		'u'
# define NB_HEX_LOWER	'x'
# define NB_HEX_UPP		'X'
# define POINTER		'p'
# define PERCENT_SIGN 	'%'
/****************** BASE *******************/
# define BASE_DEC		"0123456789"
# define BASE_HEX		"0123456789abcdef"
# define BASE_HEX_UPP	"0123456789ABCDEF"

/**************** FTPRINTF *****************/

int	ft_printf(const char *format, ...);

/*************** LIB PRINTF ****************/

int	ft_putlchar(int c);
int	ft_putlstr(char *s);
int	ft_putlnbr(int n);
int	ft_putlunbr_base(unsigned int n, char *base);
int	ft_putladdr_base(void *ptr, char *base);

/**************** FTFPRINTF *****************/

int	ft_fprintf(int fd, const char *s, ...);

/*************** LIB FPRINTF ****************/

int	ft_putlchar_fd(int fd, int c);
int	ft_putlstr_fd(int fd, char *s);
int	ft_putlnbr_fd(int fd, int n);
int	ft_putlunbr_base_fd(int fd, unsigned int n, char *base);
int	ft_putladdr_base_fd(int fd, void *ptr, char *base);

#endif
