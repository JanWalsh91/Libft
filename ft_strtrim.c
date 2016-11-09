/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:39:13 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/09 18:36:02 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated memory to and returns a copy of string s without spaces,
** newlines ('\n') and horizontal tabulations ('\t').
** If memoryory allocation fails, return NULL.
*/

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	if (!s)
		return ("\0");
	i = 0;
	while (s[i] && is_space(((char *)s)[i]))
		i++;
	start = i;
	if (start == ft_strlen(s))
		return ("\0");
	j = ft_strlen(s) - 1;
	while (s[j] && is_space(((char *)s)[j]))
		j--;
	end = j;
	i = 0;
	if (!(newstr = (char *)ft_memalloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (start <= end)
		newstr[i++] = ((char *)s)[start++];
	newstr[i++] = '\0';
	return (newstr);
}
