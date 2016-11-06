/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:50:25 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 15:14:45 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates and returns a null-terminated character string representing the
** integer n. Negative numbers are also considered.
** If memory allocation fails, return NULL.
*/

#include "libft.h"

static char	*ft_strcharcat(char *str, char c)
{
	char	*new;
	int		i;

	i = 0;
	if (str == NULL)
	{
		new = (char *)malloc(sizeof(char) * 2);
		new[0] = c;
		new[1] = '\0';
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = c;
	i++;
	new[i] = '\0';
	return (new);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;

	neg = 0;
	str = NULL;
	if (n == -2147483648)
	{
		str = ft_strcharcat(str, (-(n % 10) + '0'));
		n /= 10;
	}
	if (n < 0 && n != -2147483648)
	{
		neg = 1;
		n = -n;
	}
	while (n > 0)
	{
		str = ft_strcharcat(str, (n % 10) + '0');
		n /= 10;
	}
	if (neg)
		str = ft_strcharcat(str, '-');
	str = ft_strrev(str);
	return (str);
}
