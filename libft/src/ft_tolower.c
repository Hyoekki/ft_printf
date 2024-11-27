/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:11:41 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/12 10:16:08 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Changes character c to lower case by changing the 6th bit to 1.
 */
int	ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c | 32);
	return (c);
}
