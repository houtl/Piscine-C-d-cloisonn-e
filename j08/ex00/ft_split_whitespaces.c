/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 23:08:45 by thou              #+#    #+#             */
/*   Updated: 2016/08/19 13:02:26 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		motnb(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	if (str[0] == 0)
		return (0);
	while (str[i] != 0)
	{
		while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] != 0)
			nb++;
		while (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != 0)
			i++;
	}
	return (nb);
}

int		motlen(int i, char *str)
{
	int		nb;

	nb = 0;
	while (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != 0)
	{
		nb++;
		i++;
	}
	return (nb);
}

char	**whitetab(char **tab)
{
	tab[0] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		nb;
	char	**tab;

	i = 0;
	nb = 0;
	tab = (char**)malloc(sizeof(char*) * (motnb(str) + 1));
	if (motnb(str) == 0)
		return (whitetab(tab));
	while (str[i] != 0)
	{
		while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] != 0)
		{
			tab[nb++] = (char*)malloc(sizeof(char) * (motlen(i, str) + 1));
			k = 0;
		}
		while (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' && str[i] != 0)
			tab[nb - 1][k++] = str[i++];
		tab[nb - 1][k] = 0;
	}
	tab[nb] = 0;
	return (tab);
}
