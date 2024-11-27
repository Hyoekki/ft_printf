/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:07:24 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/12 10:17:06 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Changes character c to capital letter by changing the 6th bit to 0.
 */
int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c & ~32);
	return (c);
}
