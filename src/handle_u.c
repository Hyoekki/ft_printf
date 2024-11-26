/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:37:45 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/26 13:51:52 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/ft_printf.h"

int	handle_u(va_list args)
{
	unsigned int	num;
	char			buffer[20];
	int				count;
	int				i;

	num = va_arg(args, unsigned int);
	count = 0;
	i = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
	}
	while (i > 0)
	{
		ft_putchar_fd(buffer[--i], 1);
		count++;
	}
	return (count);
}
