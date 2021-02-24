/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:42:57 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/22 16:03:37 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long int	ui;

	ui = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		ui = nb;
		ui *= -1;
	}
	if (ui > 9)
	{
		ft_putnbr(ui / 10);
		ft_putnbr(ui % 10);
	}
	else
		ft_putchar(ui + '0');
}
