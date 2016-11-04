/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:27:55 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 18:32:47 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compares s1 and s2 until n characters or \0.
** If they are equal, returns 1. Otherwise returns 0.
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}
