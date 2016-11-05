/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:16:41 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 19:19:36 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns an array of null-terminated strings which are the
** result of the separation of the input string s by the char c.
** If memory allocation fails, return NULL.
*/

#include "libft.h"
#include <stdio.h>

size_t	get_word_count(char *s, char c)
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


char	**ft_strsplit(char const *s, char c)
{
	size_t	word_count;
	char	**result;
	size_t	i;

	word_count = get_word_count((char *)s, c);
	if (!s || !c)
		return (NULL);
	result = (char**)ft_memalloc(sizeof(char*) * (word_count + 1))))
	printf("outside mem allocation success\n");
	while (char *)s;
	{
		if (*s == c)
		{
			if (i != s)
				*(result++) = ft_strsub(i, 0, s - i);
			i = (char *)s + 1;
		}
		++s;
	}
	if (start != s)
		*(result++) = ft_strsub(i, 0, s - i);
	*result = NULL;
	return (result - word_count);
}
