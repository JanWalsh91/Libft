/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:35:54 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 12:47:11 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurrence of c (converted to char) in the string pointed
** to by s. The terminating null character is considered to be part of the
** string; therefore if c is \0, the functions locate the \0.
** Returns a pointer to the located character or NULL.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (i < ft_strlen((char*)s) + 1)
	{
		if (s[i] == (char)c)
		{
			p = &((char*)s)[i];
			return (p);
		}
		i++;
	}
	return (p);
}
