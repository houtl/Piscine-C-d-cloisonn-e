/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:21:18 by thou              #+#    #+#             */
/*   Updated: 2016/08/21 23:32:55 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	add(int i, int j)
{
	ft_putnbr(i + j);
	ft_putchar('\n');
}

void	moin(int i, int j)
{
	ft_putnbr(i - j);
	ft_putchar('\n');
}

void	mul(int i, int j)
{
	ft_putnbr(i * j);
	ft_putchar('\n');
}

void	div(int i, int j)
{
	ft_putnbr(i / j);
	ft_putchar('\n');
}

void	mod(int i, int j)
{
	ft_putnbr(i % j);
	ft_putchar('\n');
}
