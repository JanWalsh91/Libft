/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:30:34 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 13:53:23 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s2;
	void	*p;
	size_t	i;

	s2 = (char *)s;
	i = 0;
	p = NULL;
	while (i < n)
	{
		if ((unsigned char)(s2[i]) == (unsigned char)c)
			return (void *)&(s2[i]);
		i++;
	}
	return (NULL);
}
