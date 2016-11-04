/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:18:09 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 18:17:48 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates memory for and returns a string of size size, 
** with all characters initilized at \0.
** Returns NULL if allocation fails.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size);
	if (str == NULL)
		return (NULL);
	bzero(str, size);
	return (str);
}
