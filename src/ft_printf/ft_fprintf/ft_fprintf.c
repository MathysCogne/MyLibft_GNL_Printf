/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:42:50 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/31 23:30:19 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	carac_format_fd(int fd, const char c, va_list args)
{
	if (c == SINGLE_CHAR)
		return (ft_putlchar_fd(fd, va_arg(args, int)));
	if (c == STRING)
		return (ft_putlstr_fd(fd, va_arg(args, char *)));
	if (c == DECIMAL || c == INTEGER)
		return (ft_putlnbr_fd(fd, va_arg(args, int)));
	if (c == U_INTEGER)
		return (ft_putlunbr_base_fd(fd, va_arg(args, unsigned int), BASE_DEC));
	if (c == NB_HEX_LOWER)
		return (ft_putlunbr_base_fd(fd, va_arg(args, unsigned int), BASE_HEX));
	if (c == NB_HEX_UPP)
		return (ft_putlunbr_base_fd(fd, va_arg(args, unsigned int),
				BASE_HEX_UPP));
	if (c == POINTER)
		return (ft_putladdr_base_fd(fd, va_arg(args, void *), BASE_HEX));
	if (c == PERCENT_SIGN)
		return (ft_putlchar_fd(fd, '%'));
	else
		return (ft_putlchar_fd(fd, c + '0'));
	return (0);
}

int	ft_fprintf(int fd, const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!s || fd < 0 || fd > 1024)
		return (-1);
	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			len += carac_format_fd(fd, s[i + 1], args);
			i++;
		}
		else
			len += ft_putlchar_fd(fd, s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
