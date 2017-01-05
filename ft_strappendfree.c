/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappendfree.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:07:09 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/05 17:08:29 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends string src to string dst until dst reaches size number of chars,
** excluding the \0.
** Null-terminates the result.
** Frees the src.
*/

#include "libft.h"

char	*ft_strappendfree(char *dst, char *src, size_t size)
{
	size_t	length;

	length = ft_strlen(dst);
	if (length >= size)
		return (0);
	while (length <= size && *src)
		dst[length++] = *(src++);
	dst[length] = '\0';
	free(src);
	return (dst);
}
