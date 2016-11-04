/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:53:31 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 16:42:33 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int	main (void)
{
	char	chars[] = "12345A789";
	int		src[5];
	int i;

	puts("A");
	i = 0;
	while (i < 4)
	{
		//dest[i] = i;
		src[i] = i;
		i++;
	}
	src[2] = 9;
	printf("Before memccpy src = %d, %d, %d, %d\n", src[0], src[1], src[2], src[3]);
	printf("return value of memccpy: %s\n", memccpy(src, src + 2, '9', 4));
	printf("After memccpy src = %d, %d, %d, %d\n---\n", src[0], src[1], src[2], src[3]);
	i = 0;
	while (i < 4)
	{
		//dest[i] = i;
		src[i] = i;
		i++;
	}
	src[2] = 9;
	printf("Before ft_memccpy src = %d, %d, %d, %d\n", src[0], src[1], src[2], src[3]);
	printf("return value of ft_memccpy: %s\n", ft_memccpy(src, src + 2, '9', 4));
	printf("After ft_memccpy src = %d, %d, %d, %d\n---\n", src[0], src[1], src[2], src[3]);

	char	chars2[] = "12345A789";
	char	test1[] = "123456789";
	char	test2[] = "111122222";
	printf("Before memccpy test1 = %s\n", test1);
	printf("return value of memccpy: %s\n", memccpy(test1, test2 + 2, 'A', 5));
	printf("After memccpy test1 = %s\n---\n", test1);



	printf("Before memccpy chars = %s\n", chars);
	printf("return value of memccpy: %s\n", memccpy(chars, chars + 2, 'A', 5));
	printf("After memccpy chars = %s\n---\n", chars);

	printf("Before ft_memccpy chars2 = %s\n", chars2);
	printf("return value of ft_memccpy: %s\n", ft_memccpy(chars2, chars2 + 2, 'A', 5));
	printf("After ft_memccpy chars2 = %s\n", chars2);
	return(0);
}
