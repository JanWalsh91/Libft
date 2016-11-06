/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:16:41 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 15:15:00 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns an array of null-terminated strings which are the
** result of the separation of the input string s by the char c.
** If memory allocation fails, return NULL.
*/

#include "libft.h"

static size_t	get_word_count(char *s, char c)
{
	size_t	i;
	size_t	l;
	size_t	count;
	int		inword;

	l = ft_strlen((const char *)s);
	i = 0;
	count = 0;
	inword = 0;
	while (i <= l)
	{
		if ((s[i] == c || s[i] == '\0') && inword)
			count++;
		else if (s[i] != c)
			inword = 1;
		i++;
	}
	return (count);
}

static size_t	get_word_length(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	word_count;
	size_t	word_length;
	char	**result;
	int		i;
	int		j;

	word_count = get_word_count((char *)s, c);
	if (!s || !c)
		return (NULL);
	result = (char**)ft_memalloc(sizeof(char*) * (word_count + 1));
	result[word_count + 1] = "\0";
	i = 0;
	j = 0;
	while (word_count)
	{
		if (s[i] && s[i] == c)
			i++;
		word_length = get_word_length((char *)s + i, c);
		result[j] = ft_strsub(s + i, 0, word_length);
		s = s + word_length;
		j++;
		word_count--;
	}
	return (result);
}
