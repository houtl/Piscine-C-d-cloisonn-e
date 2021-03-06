/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:35:21 by thou              #+#    #+#             */
/*   Updated: 2016/11/09 12:59:01 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	int		a;
	int 	b;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if ((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	{
		write(1, "error\n", 6);
		return(0);
	}
	if (av[2][0] == '+')
		a = a + b;
	if (av[2][0] == '-')
		a = a - b;
	if (av[2][0] == '*')
		a = a * b;
	if (av[2][0] == '/' && b != 0)
		a = a / b;
	if (av[2][0] == '%' && b != 0)
		a = a % b;
	printf("%d\n", a);
}
