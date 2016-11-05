/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:53:31 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 15:04:11 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int	main (void)
{
	char	s1[50];
	char	s2[50];

	strcpy(s1, "123456789");
	strcpy(s2, "aaaaBaaaa");

	printf("%s\n", memccpy(s1, s2, 'B', 5));

	strcpy(s1, "123456789");
	strcpy(s2, "aaaaBaaaa");

	printf("%s\n", ft_memccpy(s1, s2, 'B', 5));
	return (0);
}
