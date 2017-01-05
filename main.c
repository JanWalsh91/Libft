/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 16:22:59 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/05 16:35:43 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int ac, char ** av)
{
	if (ac < 4)
		return (0);
	char *s = ft_strnew(20);
	printf("ft_strsjoin result: %s\n", ft_strsjoin(4, s, av[1], av[2], av[3]));
	return (0);
}
