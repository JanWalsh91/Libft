/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:35:19 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 14:37:13 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Copies n bytes from src to dst. If dst and src overlap,
 ** behavior is undefined.
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst8;
	char	*src8;

	dst8 = (char *)dst;
	src8 = (char *)src;
	while (n--)
		*dst8++ = *src8++;
	return(dst);
}
