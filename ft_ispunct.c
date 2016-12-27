/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:33:09 by jwalsh            #+#    #+#             */
/*   Updated: 2016/12/01 11:39:13 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** UNTESTED
** Returns 1 if c is punctuation, 0 if not.
*/

#include "libft.h"

int	ft_ispunct(int c)
{
	return ((33 <= c && c <= 47) ||
			(58 <= c && c <= 64) ||
			(91 <= c && c <= 96) ||
			(123 <= c && c <= 126));
}