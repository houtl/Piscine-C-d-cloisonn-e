/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 14:48:12 by thou              #+#    #+#             */
/*   Updated: 2016/08/20 22:08:30 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_strdup(char *src)
{
	char		*dest;
	int			i;

	i = 0;
	while (src[i] != 0)
		i++;
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*par;
	int			i;
	int			j;

	par = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (par == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
			j++;
		par[i].size_param = j;
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
