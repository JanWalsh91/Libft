/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustrappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:42:33 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/07 13:02:07 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends unsigned char string src to string dst until dst reaches size number
** of chars, excluding the \0.
** Null-terminates the result.
*/

#include "libft.h"

unsigned char	*ft_ustrappend(unsigned char *dst, unsigned char *src,
		size_t size)
{
	size_t	length;

	length = (dst && *dst) ? ft_strlen((char *)dst) : 0;
	if (length >= size)
		return (0);
	while (length <= size && *src)
		dst[length++] = *(src++);
	dst[length] = '\0';
	return (dst);
}
