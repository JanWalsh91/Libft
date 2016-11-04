/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:35:30 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 15:53:18 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main (void)
{
	char	chars[] = "123456789";
	int		src[5];
	int i;

	i = 0;
	while (i < 4)
	{
		//dest[i] = i;
		src[i] = i;
		i++;
	}
	printf("Before memcpy src = %d, %d, %d, %d\n", src[0], src[1], src[2], src[3]);
	printf("return value of memcpy: %s\n", memcpy(src, src + 2, 4));
	printf("After memcpy src = %d, %d, %d, %d\n---\n", src[0], src[1], src[2], src[3]);
	i = 0;
	while (i < 4)
	{
		//dest[i] = i;
		src[i] = i;
		i++;
	}
	printf("Before ft_memcpy src = %d, %d, %d, %d\n", src[0], src[1], src[2], src[3]);
	printf("return value of ft_memcpy: %s\n", ft_memcpy(src, src + 2, 4));
	printf("After ft_memcpy src = %d, %d, %d, %d\n---\n", src[0], src[1], src[2], src[3]);

	char	chars2[] = "123456789";

	printf("Before memcpy chars = %s\n", chars);
	printf("return value of memcpy: %s\n", memcpy(chars, chars + 2, 3));
	printf("After memcpy chars = %s\n---\n", chars);

	printf("Before ft_memcpy chars2 = %s\n", chars2);
	printf("return value of ft_memcpy: %s\n", ft_memcpy(chars2, chars2 + 2, 3));
	printf("After ft_memcpy chars2 = %s\n", chars2);
	return(0);
}
