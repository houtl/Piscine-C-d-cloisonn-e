/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 19:08:24 by exam              #+#    #+#             */
/*   Updated: 2016/08/19 21:16:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*copy(char *dest, char *str)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (str[j] != 0)
	{
		dest[i + j] = str[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	output(char *dest)
{
	int i;
	int j;

	write (1, &dest[0], 1);
	i = 1;
	while (dest[i] != 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (dest[i] == dest[j])
			{
				i++;
				j = -1;
			}
			j--;
		}
		if (j == -1)
			write(1, &dest[i++], 1);
	}
	write(1, "\n", 1);
}

int		main(int nb, char **str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (nb != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	dest = copy(str[1], str[2]);
	if (dest[0] == 0)
		write(1, "\n", 1);
	else
		output(dest);
	return (0);
}
