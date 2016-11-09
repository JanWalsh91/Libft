/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:03:09 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/09 18:09:51 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates first occurrence of substring in string where no more than len
** characters are searched.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	l = ft_strlen(little);
	while (i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] && big[i + j] == little[j] &&
					little[j] && i + j < len)
				j++;
			if (j == l)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
