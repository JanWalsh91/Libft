/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:41:18 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/08 18:15:43 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*big;
	char	*small;
	char	*big2;
	char	*small2;
	char	*test;

	test = NULL;
	if (ac != 4)
	{
		printf("Please input string, substring to find and max\n");
		return (0);
	}
	ft_strnewcpy(&big, av[1]);
	ft_strnewcpy(&small, av[2]);
	printf("big: %s\nsmall: %s\n", big, small);
	printf("strnstr result: %s\n -- \n", strnstr(big, small, ft_atoi(av[3])));
	ft_strnewcpy(&big2, av[1]);
	ft_strnewcpy(&small2, av[2]);
	printf("big: %s\nsmall: %s\n", big2, small2);
	printf("ft_strnstr result: %s\n", ft_strnstr(big2, small2, ft_atoi(av[3])));
	return (0);
}
