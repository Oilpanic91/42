/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 08:38:36 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/24 17:16:25 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int a;

	a = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		a *= nb;
	return (a);
}
