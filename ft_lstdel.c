/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:07:32 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 16:22:24 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees the memory of the link pointed to by the first param,
** and that of all succeeding links using del and free.
** The pointer to the first link becomes NULL.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*,size_t))
{
	t_list	*p;

	p = *alst;
	while (p->next != NULL)
	{
		ft_lstdel(alst, del);
		p = p-> next;
	}
	*alst = NULL;
}
