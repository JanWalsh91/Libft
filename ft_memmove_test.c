/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:36:26 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/05 16:05:03 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(char *dst, const char *scr, size_t len);

int	main (void)
{
	char		dest[] = "123456789";
	char		src[]  = "abcdefghi";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	printf("return value of memmove: %s\n", memmove(dest, src, 5));
	printf("After memmove dest = %s, src = %s\n---\n", dest, src);
	
	char		dest2[] = "123456789";
	char		src2[]  = "abcdefghi";

	printf("Before ft_memmove dest2 = %s, src = %s\n", dest2, src2);
	printf("return value of ft_memmove: %s\n", ft_memmove(dest2, src2, 5));
	printf("After ft_memmove dest2 = %s, src2 = %s\n---\n", dest2, src2);

	char		test[] = "123456789";

	printf("Before memmove test = %s\n", test);
	printf("return value of memmove: %s\n", memmove(test, test + 3, 5));
	printf("After memmove test = %s\n---\n", test);
	
	char		test2[] = "123456789";

	printf("Before ft_memmove test2 = %s\n", test2);
	printf("return value of ft_memmove: %s\n", ft_memmove(test2, test2 + 3, 5));
	printf("After ft_memmove test2 = %s\n", test2);
	return(0);
}
