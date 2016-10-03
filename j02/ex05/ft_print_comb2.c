/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 13:25:01 by thou              #+#    #+#             */
/*   Updated: 2016/08/09 01:49:25 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	output(int i, int j)
{
	int k;
	int l;

	k = i;
	l = j + 1;
	while (k <= '9')
	{
		while (l <= '9')
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(' ');
			ft_putchar(k);
			ft_putchar(l);
			if (i != '9' || j != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			l++;
		}
		k++;
		l = '0';
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = '0';
	j = '0';
	while (i <= '9')
	{
		while (j <= '9')
		{
			output(i, j);
			j++;
		}
		i++;
		j = '0';
	}
}
