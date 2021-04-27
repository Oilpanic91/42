/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:19:18 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/27 11:32:30 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elt;

	while (*lst)
	{
		elt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = elt;
	}
}
