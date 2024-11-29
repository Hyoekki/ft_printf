/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:21:42 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/29 14:01:25 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/include/libft.h"

int	handle_s(va_list *args);
int	handle_d(va_list *args);
int	handle_percent(va_list *args);
int	handle_x(va_list *args);
int	handle_capital_x(va_list *args);
int	handle_u(va_list *args);
int	handle_c(va_list *args);
int	handle_p(va_list *args);

typedef struct s_specifier_map
{
	char	specifier;
	int		(*handler)(va_list *args);
}	t_specifier_map;

int	ft_printf(const char *format, ...);

#endif
