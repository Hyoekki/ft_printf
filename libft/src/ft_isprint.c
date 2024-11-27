/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:11:13 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:52:46 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check wether integer c is printable (between ASCII space and tilde) value
and return 1 (TRUE) or 0 (FALSE)
 */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
