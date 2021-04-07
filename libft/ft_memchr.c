/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:19:53 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 17:28:38 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casts;
	size_t			i;

	casts = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (casts[i] == (unsigned char)c)
			return ((void *)&casts[i]);
		i++;
	}
	return (0);
}
