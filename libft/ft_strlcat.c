/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:06:01 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/07 17:09:33 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (dstsize + srclen);


		while ()
		{
			i++;
		}
		j = 0;
	while (src[j])
	{ 

	j++;
	}
	return (i);
}

int main()
{
	char *s1 = "shemale";
	char *s2 = "bite";
	printf("%lu", strlcat(s1, s2, 7));
	return (0);
}

