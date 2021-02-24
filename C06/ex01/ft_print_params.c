/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:37:48 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/24 10:58:10 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int a;

	i = 0;
	a = 1;
	while (argc > a)
	{
		while (argv[a][i])
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		a++;
		i = 0;
		ft_putchar('\n');
	}
}
