/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:21:18 by thou              #+#    #+#             */
/*   Updated: 2016/08/22 14:12:23 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_add(int i, int j)
{
	ft_putnbr(i + j);
	ft_putchar('\n');
}

void	ft_sub(int i, int j)
{
	ft_putnbr(i - j);
	ft_putchar('\n');
}

void	ft_mul(int i, int j)
{
	ft_putnbr(i * j);
	ft_putchar('\n');
}

void	ft_div(int i, int j)
{
	ft_putnbr(i / j);
	ft_putchar('\n');
}

void	ft_mod(int i, int j)
{
	ft_putnbr(i % j);
	ft_putchar('\n');
}
