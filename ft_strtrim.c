/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:39:13 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 17:16:25 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated memory to and returns a copy of string s without spaces,
** newlines ('\n') and horizontal tabulations ('\t').
** If memoryory allocation fails, return NULL.
*/

#include "libft.h"

int		is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	l;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	l = ft_strlen(s) + 1;
	if (l == 1)
		return (NULL);
	newstr = (char *)ft_memalloc(sizeof(char) * l);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] && is_space(((char *)s)[i]))
		i++;
	start = i;
	j = l - 2;
	while (s[j] && is_space(((char *)s)[j]))
		j--;
	end = j;
	i = 0;
	while (start <= end)
	{
		newstr[i] = ((char *)s)[start];
		start++;
		i++;
	}
	return (newstr);
}
