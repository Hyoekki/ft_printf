/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:42:40 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/24 13:44:01 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h" 

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
