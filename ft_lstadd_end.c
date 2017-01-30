/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 12:25:17 by jwalsh            #+#    #+#             */
/*   Updated: 2017/01/30 12:28:10 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds an elements to the end of a list.
*/

void	ft_lstadd_end(t_list **alist, t_list *n)
{
	if (n)
	{
		if (!*alist)
			*alist = n;
		else
		{
			while ((*alist)->next)
				*alist = (*alist)->next;
			(*alist)->next = n;
		}
	}
}
