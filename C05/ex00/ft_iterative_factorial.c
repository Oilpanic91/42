/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:54:03 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/24 11:16:22 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		while (a <= nb)
		{
			b = b * a;
			a++;
		}
	}
	return (b);
}
