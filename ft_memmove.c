/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:59:38 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 15:27:46 by jwalsh           ###   ########.fr       */
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
	unsigned char	*src8;
	unsigned char	*dst8;

	src8 = (unsigned char *)src;
	dst8 = (unsigned char *)dst;
	while (dst8 && src8 && len--)
	{
		*dst8++ = *src8++;
	}
	return (dst);
}
