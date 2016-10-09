/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 13:58:46 by exam              #+#    #+#             */
/*   Updated: 2016/08/26 15:33:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rev(char *tab)
{
	int		len;
	int		i;
	int		j;
	char	tmp;

	len = 0;
	while (tab[len])
	{
		len++;
	}
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
	return (tab);
}

char	*remplace(char *tab)
{
	int i;
	
	i = 0;
	while (tab[i])
	{
		if (tab[i] == ':')
			tab[i] = 'A';
		if (tab[i] == ';')
			tab[i] = 'B';
		if (tab[i] == '<')
			tab[i] = 'C';
		if (tab[i] == '=')
			tab[i] = 'D';
		if (tab[i] == '>')
			tab[i] = 'E';
		if (tab[i] == '?')
			tab[i] = 'F';
		i++;
	}
	return (tab);
}

char	*ft_itoa_base(int value, int base)
{
	char	*tab;
	int		i;
	long	nb;

	tab = (char*)malloc(sizeof(char) * 33);
	i = 0;
	nb = value;
	if (nb == 0)
	{
		tab[0] = 0;
		i = 1;
	}
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		tab[i] = (nb % base) + '0';
		nb = nb / base;
		i++;
	}
	if (base == 10 && value < 0)
		tab[i++] = '-';
	tab[i] = 0;
	return (remplace(rev(tab)));
}
