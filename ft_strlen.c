/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:45:07 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 17:59:55 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Computes and returns the length of the string.
** Excludes the null terminating character.
*/

#include "libft.h"

unsigned long	ft_strlen(char *s)
{
	unsigned long i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
