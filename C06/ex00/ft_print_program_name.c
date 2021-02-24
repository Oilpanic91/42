/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:35:48 by rcavalie          #+#    #+#             */
/*   Updated: 2021/02/24 11:00:33 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char a)
{
	write(1, &a, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[0][i])
	{
		ft_print_program_name(argv[0][i]);
		i++;
	}
	ft_print_program_name('\n');
}
