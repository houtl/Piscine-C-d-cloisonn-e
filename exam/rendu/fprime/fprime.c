/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:44:41 by exam              #+#    #+#             */
/*   Updated: 2016/11/15 12:43:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int nextprime(int i)
{
	int j;

	if (i == 2)
		return (3);
	i += 2;
	j = 3;
	while (j <= i / 2)
	{
		if (i % j == 0)
			return (nextprime(i));
		j += 2;
	}
	return (i);
}

int main(int ac, char **av)
{
	int n;
	int i;

	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	n = atoi(av[1]);
	i = 2;
	while (n == 1 || n == 2)
	{
		printf("%d\n", n);
		return (0);
	}
	while (n != 1)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				printf("%d\n", i);
				return (0);
			}
			printf("%d*", i);
			n = n / i;
		}
		i = nextprime(i);
	}
}
