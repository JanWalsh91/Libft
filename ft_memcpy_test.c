/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:35:30 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 17:57:20 by jwalsh           ###   ########.fr       */
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

	if (ac != 4)
	{
		printf("please enter a dst, a src and size\n");
		return (0);
	}
	dst = ft_memalloc(sizeof(av[1]));
	src = ft_memalloc(sizeof(av[2]));
	dst = strcpy(dst, av[1]);
	src = strcpy(src, av[2]);
	size = atoi(av[3]);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n\n", size);
	printf("memcpy return: %s\nresults\n", memcpy(dst, src, size));
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n --- \n", size);
	dst2 = ft_memalloc(sizeof(av[1]));
	src2 = ft_memalloc(sizeof(av[2]));
	src2 = strcpy(src2, av[1]);
	dst2 = strcpy(dst2, av[2]);
	size = atoi(av[3]);
	printf("ft_memcpy return: %s\nresults:\n", (char *)ft_memcpy(dst, src, size));
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("size: %lu\n", size);
	return (0);
}
