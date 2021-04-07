/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:41:41 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 17:28:59 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*casts1;
	unsigned char	*casts2;
	size_t			i;

	casts1 = (unsigned char *)s1;
	casts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (casts1[i] != casts2[i])
			return (casts1[i] - casts2[i]);
		i++;
	}
	return (0);
}
