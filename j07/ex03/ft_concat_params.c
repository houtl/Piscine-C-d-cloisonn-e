/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:47:18 by thou              #+#    #+#             */
/*   Updated: 2016/08/17 16:29:14 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*copy(int argc, char **argv, char *str)
{
	int i;
	int j;
	int size;

	size = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			str[size] = argv[i][j];
			j++;
			size++;
		}
		str[size++] = '\n';
		i++;
	}
	str[size - 1] = 0;
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	size = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			j++;
			size++;
		}
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (size + 1));
	return (copy(argc - 1, argv + 1, str));
}
