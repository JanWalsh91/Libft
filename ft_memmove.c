/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:59:38 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/09 17:40:12 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies len bytes from string src to string dst.
** The two srings may overlap.
** The copy is always done is a non-destructive manner.
** Returns the original value of dst
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	if (len == 0 || dst == src)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s > d)
	{
		i = 0;
		while (i < (int)len)
			d[i++] = *s++;
		return (dst);
	}
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
		return (dst);
	}
}
