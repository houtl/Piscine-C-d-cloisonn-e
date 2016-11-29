/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:57:56 by thou              #+#    #+#             */
/*   Updated: 2016/11/28 17:42:54 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int isparen(char c)
{
	if (c == '(' || c == '[' || c == '{')
		return (1);
	else if (c == ')' || c == ']' || c == '}')
		return (2);
	else
		return (0);
}

void check(char *c)
{
	int		i;
	char	tab[4096];

	i = 0;
	while (*c)
	{
		while (!isparen(*c))
			c++;
		if (isparen(*c) == 1)
			tab[i++] = *(c++);
		if (isparen(*c) == 2 && i < 1)
		{
			write(1, "Error\n", 6);
			return ;
		}
		if (*c == ')')
		{
			if (!(tab[--i] == '('))
			{
				write(1, "Error\n", 6);
				 return ;
			}
			c++;
		}
		if (*c == ']')
		{
			if (!(tab[--i] == '['))
			{
				write(1, "Error\n", 6);
				 return ;
			}
			c++;
		}
		if (*c == '}')
		{
			if (!(tab[--i] == '{'))
			{
				write(1, "Error\n", 6);
				 return ;
			}
			c++;
		}
	}
	if (i != 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	write(1, "OK\n", 3);
}

int main(int ac, char **av)
{
	int		i;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		check(av[i]);
		i++;
	}
	return (0);
}
