/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:01:40 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/27 13:39:18 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void * (*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elt;

	new = NULL;
	while (lst)
	{
		elt = ft_lstnew(f(lst->content));
		if (!elt)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elt);
		lst = lst->next;
	}
	return (new);
}
