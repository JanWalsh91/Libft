/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 17:59:29 by jwalsh            #+#    #+#             */
/*   Updated: 2016/12/29 18:41:14 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_itoa_base(int value, int base)
{
	char	*result;
	int		i;
	int		sign;
	long	n;

	if (base < 2)
		return (0);
	n = (value < 0) ? -(long)value : value;
	sign = (value < 0) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	if (!(result = (char *)malloc(i + 1)))
		return (NULL);
	result[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		result[i] = (n % base) < 10 ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	(i == 0) ? result[i] = '-' : 0;
	return (result);
}
