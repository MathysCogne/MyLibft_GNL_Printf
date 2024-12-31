/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putladdr_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/12/31 23:30:22 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putladdr_base_fd(int fd, void *ptr, char *base)
{
	unsigned long long	addr;
	int					len;

	if (!ptr)
		return (ft_putlstr_fd(fd, "(nil)"));
	len = 0;
	addr = (unsigned long long)ptr;
	if (addr >= 16)
		len += ft_putladdr_base_fd(fd, (void *)(addr / 16), base);
	if (len == 0)
		len += ft_putlstr_fd(fd, "0x");
	len += write(fd, &base[addr % 16], 1);
	return (len);
}
