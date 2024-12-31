/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlunbr_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/31 23:30:31 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlunbr_base_fd(int fd, unsigned int n, char *base)
{
	int				len;
	unsigned int	len_base;

	if (!n)
		return (ft_putlchar_fd(fd, '0'));
	len_base = ft_strlen(base);
	len = 0;
	if (n >= len_base)
		len += ft_putlunbr_base_fd(fd, n / len_base, base);
	len += write(fd, &base[n % len_base], 1);
	return (len);
}
