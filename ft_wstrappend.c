/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:39:26 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/05 16:41:49 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends wide character string src to string dst until dst reaches size
** number of chars, excluding the \0.
** Null-terminates the result.
*/

#include "libft.h"

wchar_t	*ft_wstrappend(wchar_t *dst, wchar_t *src, size_t size)
{
	size_t	length;

	length = ft_wstrlen(dst);
	if (length >= size)
		return (0);
	while (length <= size && *src)
		dst[length++] = *(src++);
	dst[length] = '\0';
	return (dst);
}