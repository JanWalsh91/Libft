/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:46:51 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 16:42:35 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Copies bytes from src to dst. If c (converted to unsigned char) occurs
 ** in src, the copy stops and a pointer to the byte after the copy of c
 ** in the string dst is returned. Otherwise, n bytes are copied and a NULL
 ** pointer is returned.
 ** behavior is undefined in overlapping src and dest strings.
 */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst8;
	char	*src8;
	char	*p;

	p = NULL;
	dst8 = (char *)dst;
	src8 = (char *)src;
	while (n--)
	{
		if (*src8 == (unsigned char)c)
		{
			p = src8++;
			return (p);
		}
		*dst8++ = *src8++;
	}
	return(p);
}
