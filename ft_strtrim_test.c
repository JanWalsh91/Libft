/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:07:41 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 17:20:30 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Please input only one parameter\n");
		return (0);
	}
	printf("ft_strtrim result: %s\n", ft_strtrim(av[1]));
	return (0);
}