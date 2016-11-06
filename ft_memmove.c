/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:59:38 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 14:43:31 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies len bytes from string src to string dst.
** The two srings may overlap.
** The copy is always done is a non-destructive manner.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst8;
	char	*src8;

	dst8 = (char *)dst;
	src8 = (char *)src;
	while (dst8 && src8 && len--)
		*dst8++ = *src8++;
	return (dst);
}
