/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:53:56 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 14:54:41 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert a upper-case letter to the corresponding lower-case letter.
** Otherwise, the argument is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c = c - 32;
	return (c);
}
