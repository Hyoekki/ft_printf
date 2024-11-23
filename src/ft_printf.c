/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:18:02 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/23 11:25:50 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

static int handle_format(const char *format, va_list args)
{
	int	count;
	int	num;
	int	temp;

	count = 0;
	if (*format == 'd' || *format == 'i')
	{
		num = va_arg(args, int);
		ft_putnbr_fd(num, 1);
		if (num < 0)
		count += 1;
		temp = num;
		if (temp == 0)
			count += 1;
		while (temp != 0)
		{
			temp /= 10;
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'i' || *(format + 1) == 'd'))
		{
			count += handle_format(format + 1, args);
			format += 2;
		}
		else
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
