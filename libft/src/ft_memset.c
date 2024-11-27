/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:22:52 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 10:45:16 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fills n number of bytes in memory block starting from pointer s with constatnt
byte c.
 */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	if (n != 0)
	{
		while (n--)
			*p++ = (unsigned char)c;
	}
	return (s);
}
