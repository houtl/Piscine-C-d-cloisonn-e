/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:52:01 by thou              #+#    #+#             */
/*   Updated: 2016/08/22 23:11:24 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		checkexp(char *op)
{
	if (op[0] != '+' && op[0] != '-' && op[0] != '*' &&
			op[0] != '/' && op[0] != '%')
		return (0);
	return (1);
}

void	(*g_cal[5])(int i, int j) = {add, moin, mul, div, mod};

void	calcul(int i, char c, int j)
{
	if (c == '+')
		g_cal[0](i, j);
	if (c == '-')
		g_cal[1](i, j);
	if (c == '*')
		g_cal[2](i, j);
	if (c == '/')
		g_cal[3](i, j);
	if (c == '%')
		g_cal[4](i, j);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (checkexp(av[2]) == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (ft_atoi(av[3]) == 0 && av[2][0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	if (ft_atoi(av[3]) == 0 && av[2][0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	calcul(ft_atoi(av[1]), av[2][0], ft_atoi(av[3]));
	return (0);
}
