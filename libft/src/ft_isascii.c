/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:05:36 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:49:08 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check wether integer c is ASCII value and return 1 (TRUE) or 0 (FALSE)
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
