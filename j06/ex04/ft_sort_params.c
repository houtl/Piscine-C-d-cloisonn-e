/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:53:25 by thou              #+#    #+#             */
/*   Updated: 2016/08/15 19:24:31 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (!(i = *s1 - *s2) && *s2)
	{
		s1++;
		s2++;
	}
	return (i);
}

void	print(int ligne, char **argu)
{
	int i;
	int j;

	i = 1;
	while (i < ligne)
	{
		j = 0;
		while (argu[i][j] != '\0')
		{
			ft_putchar(argu[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ligne, char **argu)
{
	int		i;
	int		k;
	char	*temp;

	i = 1;
	while (i + 1 < ligne)
	{
		k = 1;
		while (i + k < ligne)
		{
			if (ft_strcmp(argu[i], argu[i + k]) > 0)
			{
				temp = argu[i];
				argu[i] = argu[i + k];
				argu[i + k] = temp;
			}
			k++;
		}
		i++;
	}
	print(ligne, argu);
}
