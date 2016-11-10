/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:56:03 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/10 14:20:58 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated and returns a copy of a substring of the string s starting at
** index start for len bytes.
** If allocation fails, return NULL.
** If start and len do not designate a valid substring,
** what strnsub will do is invalid.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	j = 0;
	i = start;
	if (!len)
		return (ft_memalloc(1));
	if (!s || !(*s))
		return (NULL);
	if (!(sub = ft_strnew(len)))
		return (NULL);
	while (j < len)
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
