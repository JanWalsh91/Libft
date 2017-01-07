/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ustrsjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 11:40:38 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/07 12:37:11 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Joins n strings together.
*/

unsigned char	*ft_ustrsjoin(size_t n, ...)
{
	size_t			i;
	size_t			length;
	va_list			ap;
	va_list			cp;
	unsigned char	*result;

	va_start(ap, n);
	va_copy(cp, ap);
	i = -1;
	length = 0;
	while (++i < n)
	{
		result = va_arg(cp, unsigned char *);
		if (result && *result)
			length += ft_strlen((char *)result);	
	}
	result = NULL;
	if (!(result = ft_ustrnew(length)))
		return (NULL);
	i = -1;
	while (++i < n)
		result = ft_ustrappend(result, va_arg(ap, unsigned char *), length);
	return (result);
	va_end(ap);
	va_end(cp);
}
