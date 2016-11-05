/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:46:08 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 16:08:43 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares byte string and byte string s2 positive int if s1 > s2, 0 of s1 = s2,
** or a negative int if s1 < s2. The comparision is done with unsigned chars.
** Both strings are assumed to be n bytes long.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}