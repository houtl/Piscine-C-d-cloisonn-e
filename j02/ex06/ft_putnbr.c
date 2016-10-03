/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 16:02:19 by thou              #+#    #+#             */
/*   Updated: 2016/08/11 16:02:46 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		wei(int i)
{
	int		k;

	k = 1;
	while (i / 10 > 0)
	{
		k = k * 10;
		i = i / 10;
	}
	return (k);
}

void	put(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int		i;
	char	j;

	if (nb < -2147483647)
		put();
	else
	{
		if (-2147483647 <= nb && nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		i = nb;
		while (nb / 10 > 0)
		{
			i = nb / wei(nb);
			j = '0' + i;
			ft_putchar(j);
			nb = nb % wei(nb);
		}
		j = '0' + nb;
		ft_putchar(j);
	}
}
