/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:51:45 by acosset           #+#    #+#             */
/*   Updated: 2016/08/07 19:24:47 by acosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int size, char letter1, char letter2, char letter3)
{
	int i;

	i = 0;
	if (size >= 1)
		ft_putchar(letter1);
	while (i < size - 2)
	{
		ft_putchar(letter2);
		i++;
	}
	if (size >= 2)
		ft_putchar(letter3);
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int i;

	i = 0;
	if (y >= 1 && x > 0)
		line(x, 'A', 'B', 'C');
	while (i < y - 2 && x > 0)
	{
		line(x, 'B', ' ', 'B');
		i++;
	}
	if (y >= 2 && x > 0)
		line(x, 'C', 'B', 'A');
}
