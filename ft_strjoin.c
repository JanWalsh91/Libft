/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:13:52 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 16:35:41 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenates s1 and s2 in a new string which was allocated enough memory
** with malloc. Returns that new string.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	length;
	size_t	i;
	size_t	j;

	length = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	newstr = ft_memalloc(sizeof(char) * length);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < length && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < length && s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
