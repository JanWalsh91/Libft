/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:22:15 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/08 16:08:23 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = s[i];
	return (dst);
}
