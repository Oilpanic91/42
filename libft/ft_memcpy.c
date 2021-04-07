/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:32:07 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 14:03:30 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstcast;
	unsigned char		*srccast;

	if (!src && !dst)
		return (NULL);
	dstcast = (unsigned char *)dst;
	srccast = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		i++;
	}
	return (dstcast);
}
