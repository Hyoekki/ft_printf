/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:44:25 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/24 13:45:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

int	handle_percent(va_list args)
{
	(void)args;
	ft_putchar_fd('%', 1);
	return (1);
}
