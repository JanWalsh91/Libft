/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:36:28 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/09 18:36:10 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies a function to each character in the string s. The function takes the
** index of the char and the address of the char whose address is passed to it
** to be modifyable.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &(s[i]));
		i++;
	}
}
