/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 07:06:33 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/27 14:52:31 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
Takes character string and converts it to integer.
Set variables for saving the sign, result to be returned and check
for checking memory overflow. Skip white space and set sign.
While the next char is digit append it to previous characters.
 */
int	ft_atoi(const char *str)
{
	int			sign;
	long long	result;
	long long	check;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		check = result * 10 + (*str - '0');
		if (check / 10 != result && sign > 0)
			return (-1);
		if (check / 10 != result && sign < 0)
			return (0);
		result = check;
		str++;
	}
	return ((int)result * sign);
}
