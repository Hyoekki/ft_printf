/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 07:22:31 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:53:06 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check wether integer c is white space and return 1 (TRUE) or 0 (FALSE)
 */

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}
