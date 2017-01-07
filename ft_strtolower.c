/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 18:34:54 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/06 17:34:35 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

/*
** Puts the uppercase chars in a str to lowercase.
*/

void	ft_strtolower(char *s)
{
	int	i;

	i = -1;
	while (s && s[++i])
		ft_isupper(s[i]) ? s[i] = ft_tolower(s[i]): 0;
}
