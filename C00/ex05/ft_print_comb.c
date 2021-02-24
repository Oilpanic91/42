/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 07:25:28 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/15 10:21:35 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int nombre1;
	int nombre2;
	int nombre3;

	nombre1 = '0';
	nombre2 = '1';
	nombre3 = '2';
	while (nombre1 <= '7')
	{
		while (nombre2 <= '8')
		{
			while (nombre3 <= '9')
			{
				ft_print_comb(nombre1);
				ft_print_comb(nombre2);
				ft_print_comb(nombre3);
				ft_print_comb(',');
				ft_print_comb(' ');
				nombre3++;
			}
			nombre2++;
			nombre3 = nombre2 + 1;
		}
		nombre1++;
		nombre2 = nombre1;
	}
}
