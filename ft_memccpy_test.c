/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:53:31 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 18:07:15 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	*src;
	char	*dst;
	size_t	size;
	char	*src2;
	char	*dst2;

	if (ac != 5)
	{
		printf("please enter a dst, a src, a char, and size\n");
		return (0);
	}
	dst = ft_memalloc(sizeof(av[1]));
	src = ft_memalloc(sizeof(av[2]));
	dst = strcpy(dst, av[1]);
	src = strcpy(src, av[2]);
	size = atoi(av[4]);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n\n", size);
	printf("memccpy return: %s\nresults\n", memccpy(dst, src, av[3][0], size));
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n --- \n", size);
	dst2 = ft_memalloc(sizeof(av[1]));
	src2 = ft_memalloc(sizeof(av[2]));
	src2 = strcpy(src2, av[1]);
	dst2 = strcpy(dst2, av[2]);
	size = atoi(av[4]);
	printf("ft_memcpy return: %s\nresults:\n", ft_memccpy(dst, src, av[3][0], size));
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n", size);
	return (0);
}
