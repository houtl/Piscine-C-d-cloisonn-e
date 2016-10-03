/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 12:46:52 by thou              #+#    #+#             */
/*   Updated: 2016/08/12 14:47:26 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		con(int i, int j, char *a, char *b)
{
	if (b[i + j] == a[j] || b[i + j] == a[j] - 32)
		return (1);
	return (0);
}

void	alert(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	while (b[i] != '\0')
	{
		j = 0;
		while (con(i, j, a, b) && a[j] != '\0' && b[i + j] != '\0')
		{
			j++;
			if (a[j] == '\0')
				write(1, "Alert!!!\n", 9);
		}
		i++;
	}
}

int		main(int i, char **c)
{
	int j;

	j = 1;
	if (i > 1)
		while (j < i)
		{
			alert("president", c[j]);
			alert("attack", c[j]);
			alert("power", c[j]);
			j++;
		}
	return (0);
}
