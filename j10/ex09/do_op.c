/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:52:01 by thou              #+#    #+#             */
/*   Updated: 2016/08/22 23:16:08 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

void	ft_usage(int i, int j)
{
	i = 0;
	j = 0;
	write(1, "error : only [ + - * / % ] are accepted.\n", 41);
}

void	calcul(int i, char c, int j)
{
	int k;

	k = 0;
	while (k < 6)
	{
		if (*g_opptab[k].c == c)
			g_opptab[k].fonc(i, j);
		k++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
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
	if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*' &&
			av[2][0] != '/' && av[2][0] != '%')
		av[2][0] = 0;
	calcul(ft_atoi(av[1]), av[2][0], ft_atoi(av[3]));
	return (0);
}
