/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:03:43 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 14:14:01 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstcast;
	unsigned char	*srccast;
	size_t			i;

	dstcast = (unsigned char *)dst;
	srccast = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		if (srccast[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
