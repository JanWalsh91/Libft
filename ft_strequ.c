/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:05:21 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 18:27:01 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compares s1 and s2.
** If they are equal, returns 1. Otherwise returns 0.
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
