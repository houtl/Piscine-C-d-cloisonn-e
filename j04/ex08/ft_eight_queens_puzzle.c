/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 23:35:37 by thou              #+#    #+#             */
/*   Updated: 2016/08/10 23:51:48 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursivite(int i)
{
	if (i == 92)
		return (i);
	else
		return (recursivite(i + 1));
}

int	ft_eight_queens_puzzle(void)
{
	return (recursivite(1));
}
