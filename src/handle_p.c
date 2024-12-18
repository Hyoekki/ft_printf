/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:02:29 by jhyokki           #+#    #+#             */
/*   Updated: 2024/12/16 13:49:48 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/ft_printf.h"

static int	convert_ptr_to_hex(unsigned long num, char *buffer)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (num == 0)
		buffer[count++] = '0';
	while (num > 0)
	{
		buffer[count++] = hex_digits[num % 16];
		num /= 16;
	}
	return (count);
}

int	handle_p(va_list *args)
{
	void			*ptr;
	unsigned long	addr;
	char			buffer[20];
	int				count;
	int				len;

	ptr = va_arg(*args, void *);
	count = 0;
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	addr = (unsigned long)ptr;
	len = convert_ptr_to_hex(addr, buffer);
	ft_putstr_fd("0x", 1);
	count += 2;
	while (len)
	{
		write(1, &buffer[--len], 1);
		count++;
	}
	return (count);
}
