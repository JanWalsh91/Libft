/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:29:54 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/10 16:00:49 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/*
** Converts unsigned long integer value into an array in base base.
*/

char	*ft_uitoa_base(uintmax_t value, int base)
{
	char			*result;
	int				i;
	uintmax_t		n;

	if (base < 2)
		return (0);
	if (value == 4294967295)
		return (ft_strdup("4294967295"));
	n = value;
	i = 1;
	while ((n /= base) >= 1)
		i++;
	if (!(result = (char *)malloc(i + 1)))
		return (NULL);
	result[i] = '\0';
	n = value;
	while (i--)
	{
		result[i] = (n % base) < 10 ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	return (result);
}
