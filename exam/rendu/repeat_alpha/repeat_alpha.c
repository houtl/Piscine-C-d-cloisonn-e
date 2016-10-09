/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 10:20:01 by exam              #+#    #+#             */
/*   Updated: 2016/08/26 10:48:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeatmi(char c)
{
	int i;
	int	j;

	i = c - 64;
	j = 0;
	while (j < i)
	{
		write(1, &c, 1);
		j++;
	}
}

void	repeatma(char c)
{
	int i;
	int	j;

	i = c - 96;
	j = 0;
	while (j < i)
	{
		write(1, &c, 1);
		j++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (av[1][i])
	{
		if (av[1][i] > 64 && av[1][i] < 91)
			repeatmi(av[1][i]);
		else if (av[1][i] >96 && av[1][i] < 123)
			repeatma(av[1][i]);
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

