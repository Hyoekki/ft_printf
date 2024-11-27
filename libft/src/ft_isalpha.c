/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:45:38 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/27 14:53:15 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check wether integer c is capital letter or lowercase and return 1 (TRUE)
or 0 (FALSE)
 */
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
