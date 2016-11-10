/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:04:01 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/10 15:34:05 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocated sufficient memory for a copy of the string s1, does the copy,
** and returns a pointer to it. The pointer may subsequendly be used as an
** argument to the function free(3).
*/

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
