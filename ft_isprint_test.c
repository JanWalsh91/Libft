/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:42:05 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 14:52:21 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	char chars[9];
	int i;

	chars[0] = 'a';
	chars[1] = 'R';
	chars[2] = 'l';
	chars[3] = 40;
	chars[4] = 11;
	chars[5] = 9;
	chars[6] = 127;
	chars[7] = 7;
	chars[8] = 0;
	i = 0;
	while (chars[i])
	{
		printf("letter: %c\n isprint: %d ft_isprint: %d\n", chars[i], isprint(chars[i]), ft_isprint(chars[i]));
		i++;
	}
	return (0);
}
