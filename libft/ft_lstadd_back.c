/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:13:50 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/26 14:33:05 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *elt;

	if (!alst)
		return ;
	if (*alst)
	{
		elt = ft_lstlast(*alst);
		elt->next = new;
	}
	else
		*alst = new;
}
