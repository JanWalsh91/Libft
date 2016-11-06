/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:15:19 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 14:32:35 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] < 33)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)(sign * result));
}
