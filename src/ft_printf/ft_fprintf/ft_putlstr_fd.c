/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 02:20:04 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlchar_fd(int fd, int c)
{
	return (write(fd, &c, 1));
}

int	ft_putlstr_fd(int fd, char *s)
{
	if (!s)
		s = "(null)";
	return (write(fd, s, ft_strlen(s)));
}
