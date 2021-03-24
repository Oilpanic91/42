/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:27:16 by rcavalie          #+#    #+#             */
/*   Updated: 2021/03/24 17:13:44 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 23) || (str[i] == 32))
		i++;
	while (str[i] == "-" || str[i] == "+")
	{
		if (str[i] == "-")
			sign *= -1;
		i++;
	}
	while (str[i] >= 0 && str[i] <= 9)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
