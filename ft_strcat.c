/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:28:21 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/07 18:32:27 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Append a copy of the null-terminated string s2 to the end of the null-
** terminated string s1, then add a terminating '\0'.
** Behavior is undefined for overlapping strings.
** s1 must have sufficient space to holf the result.
** Behavior is undefined for overlapping src and dst.
*/

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = s2[j];
	return (s1);
}
