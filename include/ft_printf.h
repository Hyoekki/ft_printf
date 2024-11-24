/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:21:42 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/24 13:40:09 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "../src/libft/libft.h"

int	handle_d(va_list args);
int	handle_percent(va_list args);

typedef int (*specifier_handler)(va_list args);
typedef struct {
	char	specifier;
	specifier_handler handler;
} specifier_map;

extern specifier_map specifiers[];
extern	int	ft_printf(const char *format, ...);

#endif
