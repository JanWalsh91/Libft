/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:46:51 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 18:00:52 by jwalsh           ###   ########.fr       */
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
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (dst + i + 1);
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (NULL);
}
