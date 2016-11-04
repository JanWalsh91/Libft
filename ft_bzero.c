/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:18:58 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 11:33:30 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes n \0 to the string s.
** If n is 0, ft_bzero does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;

	if (n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		((char*)s)[i] = '\0';
		i++;
	}
}
