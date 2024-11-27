/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 05:55:29 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/27 14:57:59 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Searches the first occurence of string *needle in *haystack and returns the
pointer to first character of needle.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*s;
	const char	*t;
	size_t		i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		s = haystack;
		t = needle;
		i = len;
		while (i-- && *s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (!*t)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
