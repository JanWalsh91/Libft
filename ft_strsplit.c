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
	size_t	j;
	size_t	k;
	size_t	firsti;
	size_t	word_length;

	word_count = get_word_count((char *)s, c);
	if (!(result = (char**)ft_memalloc(sizeof(char*) * (word_count + 1))))
		return (NULL);
	printf("outside mem allocation success\n");
	i = 0;
	j = 0;
	while (i < word_count)
	{
		firsti = 0;
		while (s[j] && s[j] == c)
			j++;
		j = firsti;
		word_length = 0;
		while (s[j] && s[j] != c)
			j++;
		word_length = (j - firsti);
		printf("word %lu length: %lu\n", i, word_length);
		if (!(result[i] = (char*)ft_memalloc(sizeof(char) * (word_length + 1))))
			return (NULL);
		printf("inside mem allocation success for word %lu\n", i);
		k = 0;
		while (k < word_length)
		{
			result[i][k] = s[j + k];
			k++;
			printf("assigned: %c\nk: %lu\n", s[j + k], k);
		}
		j = j + word_length;
		i++;
	}
	return (result);
}
