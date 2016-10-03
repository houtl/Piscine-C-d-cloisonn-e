/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:35:33 by thou              #+#    #+#             */
/*   Updated: 2016/08/14 22:30:11 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		check_arguments(int argc, char **argv)
{
	int		x;
	int		y;
	char	c;

	if (argc != 10)
	{
		return (1);
	}
	y = 1;
	while (y < 10)
	{
		x = 0;
		while (argv[y][x])
		{
			c = argv[y][x];
			if (c != '.' && (c < '0' || c > '9'))
				return (1);
			x++;
		}
		if (x != 9)
			return (1);
		y++;
	}
	return (0);
}

int		check(char **board, int i, int j, int n)
{
	int k;
	int l;
	int x;
	int y;

	k = 0;
	while (k < 9)
	{
		if (board[i][k] == n + 48 || board[k][j] == n + 48)
			return (0);
		k++;
	}
	x = i / 3 * 3;
	y = j / 3 * 3;
	k = x;
	while (k < x + 3)
	{
		l = y;
		while (l < y + 3)
			if (board[k][l++] == n + 48)
				return (0);
		k++;
	}
	return (1);
}

void	output(char **board)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &board[i][j], 1);
			if (j == 8)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

int		chercher(int n, char **board)
{
	int i;

	if (n == -1)
	{
		return (1);
	}
	if (board[n / 9][n % 9] != 46)
		return (chercher(n - 1, board));
	else
	{
		i = 1;
		while (i <= 9)
		{
			if (check(board, n / 9, n % 9, i))
			{
				board[n / 9][n % 9] = i + 48;
				if (chercher(n - 1, board))
					return (1);
				board[n / 9][n % 9] = 46;
			}
			i++;
		}
		return (0);
	}
}

int		main(int argc, char **argv)
{
	char	**board;

	if (check_arguments(argc, argv))
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	board = &argv[1];
	chercher(80, board);
	output(board);
	return (0);
}
