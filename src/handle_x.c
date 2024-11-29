/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:37:50 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/29 13:58:42 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/ft_printf.h"

static int	convert_to_hex(unsigned int num, char *buffer)
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

int	handle_x(va_list *args)
{
	unsigned int	num;
	char			buffer[20];
	int				count;
	int				len;

	num = va_arg(*args, unsigned int);
	count = 0;
	len = convert_to_hex(num, buffer);
	while (len > 0)
	{
		ft_putchar_fd(buffer[--len], 1);
		count++;
	}
	return (count);
}
