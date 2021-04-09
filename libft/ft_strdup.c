/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 09:20:49 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/09 10:30:19 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	dst = malloc(sizeof(char) * i + 1);
	if (!dst)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		dst[j] = s1[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
