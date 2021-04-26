/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcavalie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:50:08 by rcavalie          #+#    #+#             */
/*   Updated: 2021/04/26 12:46:42 by rcavalie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_strings(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb;

	if (!s[0])
		return (0);
	i = 0;
	nb = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb++;
	return (nb);
}

static void	ft_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb = ft_strings(s, c);
	tab = malloc(sizeof(char *) * (nb + 1));
	if (!tab)
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb)
	{
		ft_next_str(&next_str, &next_str_len, c);
		tab[i] = malloc(sizeof(char) * (next_str_len + 1));
		if (!tab[i])
			return (error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/*int	main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("       poil      test bite   repoil !", ' ');
	if (!tab[0])
		ft_putendl_fd("lol\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}
*/
