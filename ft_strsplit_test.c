/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:20:46 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 14:50:13 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	get_word_count(char *s, char c);
char	**ft_strsplit(char const *s, char c);

int		main(int ac, char **av)
{
	size_t	i;

	if (ac != 2)
	{
		printf("Please enter 1 parameter\n");
		return (0);
	}
	printf("get_word_count result: %lu\n", get_word_count(av[1], ' '));
	i = 0;
	while (i < get_word_count(av[1], ' '))
	{
		printf("final result[%lu]: %s\n", i, ft_strsplit(av[1], ' ')[i]);
		i++;
	}
	return (0);
}
