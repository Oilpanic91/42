/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:47:46 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 17:44:47 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*castd;
	unsigned char	*casts;

	castd = (unsigned char *)dst;
	casts = (unsigned char *)src;
	i = -1;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (i + 1 < len)
		{
			castd[len - 1] = casts[len - 1];
			len--;
		}
	}
	else
	{
		while (len > ++i)
			castd[i] = casts[i];
	}
	return (dst);
}
