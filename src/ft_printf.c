/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:18:02 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/24 13:40:30 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"
#include "../include/ft_printf.h"

int	handle_d(va_list args)
{
	int num;
	int count;

	count = 0;
	num = va_arg(args, int);
	ft_putnbr_fd(num, 1);
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	handle_percent(va_list args)
{
	(void)args;
	ft_putchar_fd('%', 1);
	return (1);
}
specifier_map specifiers[] = {
/* 	{'c', handle_c},
	{'s', handle_s},
	{'p', handle_p} */
	{'d', handle_d},
	{'i', handle_d},
/* 	{'u', handle_u},
	{'x', handle_x},
	{'X', handle_x}, */
	{'%', handle_percent},
};

static int	find_handler(char s, va_list args)
{
	specifier_map *current = specifiers;
	while(current -> specifier)
	{
		if (s == current -> specifier)
			return (current -> handler(args));
		current++;
	}
	return (2);
}

static int	process_format(const char *format, va_list args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += find_handler(*format, args);
			format++;
		}
		else
		{
			ft_putchar_fd(*format++, 1);
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int     count;

	va_start(args, format);
	count = process_format(format, args);
	va_end(args);
	return (count);
}
