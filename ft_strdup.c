/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:04:01 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 17:36:40 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*new;
	int		length;
	int		i;

	length = ft_strlen(src);
	if (!(new = (char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	i = 0;
	while (i < length)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = src[i];
	return (new);
}
