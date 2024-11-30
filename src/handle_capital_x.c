/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_capital_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:06:53 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/30 14:09:43 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "../include/ft_printf.h"

static int	convert_to_capital_hex(unsigned int num, char *buffer)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789ABCDEF";
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

int	handle_capital_x(va_list *args)
{
	unsigned int	num;
	char			buffer[20];
	int				count;
	int				len;

	num = va_arg(*args, unsigned int);
	count = 0;
	len = convert_to_capital_hex(num, buffer);
	while (len > 0)
	{
		write(1, &buffer[--len], 1);
		count++;
	}
	return (count);
}
