/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:57:19 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/07 11:44:44 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Like ft_strjoin but with unsigned chars. Used for saving converted
** wide chars in unsigned char strings.
** Concatenates s1 and s2 in a new string which was allocated enough memory
** with malloc. Returns a pointer to that new string.
*/

#include "libft.h"

unsigned char	*ft_ustrjoin(unsigned char const *s1, unsigned char const *s2)
{
	unsigned char	*newstr;
	size_t			length;
	size_t			i;
	size_t			j;

	if (!s1)
		return ((unsigned char *)s2);
	if (!s2)
		return ((unsigned char *)s1);
	length = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(newstr = ft_memalloc(sizeof(unsigned char) * length)))
		return (NULL);
	i = 0;
	while (i < length && s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < length && s2[j])
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}
