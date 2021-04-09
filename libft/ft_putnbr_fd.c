/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:40:56 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/09 11:36:41 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	a;

	a = n;
	if (a < 0)
	{
		ft_putchar_fd('-', fd);
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar_fd(a % 10 + '0', fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}
