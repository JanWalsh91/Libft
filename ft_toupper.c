/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:50:36 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 14:53:33 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert a lower-case letter to the corresponding upper-case letter.
** Otherwise, the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c = c + 32;
	return (c);
}
