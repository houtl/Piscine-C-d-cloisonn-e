/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 16:22:10 by thou              #+#    #+#             */
/*   Updated: 2016/08/10 18:12:44 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	if (power == 0)
		return (1);
	else if (power > 0)
	{
		i = power;
		j = 1;
		while (i > 0)
		{
			j = j * nb;
			i--;
		}
		return (j);
	}
	else
		return (0);
}
