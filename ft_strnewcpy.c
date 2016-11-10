/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:14:53 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/10 16:18:15 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Makes a copy of a string which is independently modifiable from the
** original one using malloc.
*/

#include "libft.h"

void	ft_strnewcpy(char **dst, char *src)
{
	int	i;

	if (!(*dst = ft_memalloc(sizeof(char) * (ft_strlen(src) + 1))))
		return ;
	i = 0;
	while (src[i])
	{
		(*dst)[i] = src[i];
		i++;
	}
	(*dst)[i] = src[i];
}
