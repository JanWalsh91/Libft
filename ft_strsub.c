/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:56:03 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 14:55:58 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated and returns a copy of a substring of the string s starting at
** index start for len bytes.
** If allocation fails, return NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	sub = ft_memalloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
