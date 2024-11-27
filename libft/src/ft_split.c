/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:00:01 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/27 14:55:44 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/libft.h"

/*
Split charcter string *s into muliple strings using char c as delimiter.
Count number of pointers needed for new strings. Copy new words to assigned
memory blocks calling word_dup function. Return 2D array of spitted words.
 */
static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;

	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;
	const char	*word_start;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc(sizeof(*result) * (words + 1));
	if (!result)
		return (NULL);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			result[words++] = word_dup(word_start, s - word_start);
		}
	}
	result[words] = NULL;
	return (result);
}
