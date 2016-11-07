/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:02:42 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 14:33:18 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;
	char	*str;

	c = 0;
	str = NULL;
	str = (ft_strnew(50));
	str = (strcpy(str, "12345"));
	while (c < 1)
	{
		str[0] = c;
		printf("c : %i\n", c);
		printf("   atoi: %i\n", atoi("/200123"));
		printf("ft_atoi: %i\n", ft_atoi("/200123"));
		c++;
	}
	return (0);
}
