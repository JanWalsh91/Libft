/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustrappendfree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:50:45 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/07 11:51:44 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Appends an unsigned char string src to unsigned char string dst until dst
** reaches size number of chars, excluding the \0.
** Null-terminates the result.
** Frees the src.
*/

#include "libft.h"

unsigned char	*ft_ustrappendfree(unsigned char *dst, unsigned char *src,
		size_t size)
{
	size_t	length;

	length = ft_strlen((char *)dst);
	if (length >= size)
		return (0);
	while (length <= size && *src)
		dst[length++] = *(src++);
	dst[length] = '\0';
	free(src);
	return (dst);
}
