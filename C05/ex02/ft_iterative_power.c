/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 08:38:36 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/23 10:05:08 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		while (a <= power)
		{
			b = b * nb;
			a++;
		}
	return (b);
}
