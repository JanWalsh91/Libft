/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:31:38 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/06 17:16:51 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Traverses the list applying to each link the function f.
** Creates a new list with malloc with the results of the function
** If an allocation fails, returns NULL.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*p;
	t_list	*new;

	//pass content through function
	//put result in new link
	//link it to the previous link. the first one points to NULL.
	p = lst;
	new = ft_lstnew((f(p)->content), (f(p))->content_size);
	while ()
	{
		ft_lstadd(, );
	}
}
