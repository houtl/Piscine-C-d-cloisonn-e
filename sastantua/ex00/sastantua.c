/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:03:20 by thou              #+#    #+#             */
/*   Updated: 2016/08/08 12:20:56 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	slash(int hang, int lie, int i, int size)
{
	int j;
	int k;
	int lie2;
	int hang2;

	j = 1;
	hang2 = 3;
	lie2 = 7;
	while (i > hang2)
	{
		j++;
		lie2 = 3 * (j - 1) * (j - 1) / 2 + 10 * (j - 1) + 7 + (j - 1) % 2;
		hang2 = (5 * j + j * j) / 2;
	}
	k = lie / 2 - lie2 / 2 + hang2 - i;
	return (k);
}

void	output1(int hang, int lie, int size)
{
	int i;
	int j;

	i = 1;
	while (i <= hang - size + 1 - size % 2)
	{
		j = 1;
		while (j <= slash(hang, lie, i, size))
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		j++;
		while (j <= lie - slash(hang, lie, i, size) - 1)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	output3(int i, int size)
{
	int j;

	j = 1;
	while (j <= size)
	{
		if (i == size / 2 + size % 2 && j == size - 1)
			ft_putchar('$');
		else
			ft_putchar('|');
		j++;
	}
}

void	output2(int lie, int size)
{
	int i;
	int j;

	i = 1;
	while (i <= size - (size - 1) % 2)
	{
		j = 1;
		while (j < size - i + size % 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		while (j < lie - size + i - size % 2)
		{
			while (j == lie / 2 - size / 2 + 1 - size % 2)
			{
				output3(i, size);
				j = j + size;
			}
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}

void	sastantua(int size)
{
	int n;
	int lie;
	int hang;

	n = size - 1;
	hang = (5 * size + size * size) / 2;
	lie = 3 * n * n / 2 + 10 * n + 7 + n % 2;
	output1(hang, lie, size);
	output2(lie, size);
}
