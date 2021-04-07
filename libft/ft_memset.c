/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 11:56:08 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/02 13:29:06 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*void_ptr;

	void_ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		void_ptr[i] = c;
		i++;
	}
	return (str);
}
