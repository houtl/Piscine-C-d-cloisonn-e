/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 18:22:11 by thou              #+#    #+#             */
/*   Updated: 2016/08/10 20:08:16 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 0 || nb == 1 || nb % 2 == 0)
		return (0);
	else if (nb < 0)
		return (0);
	else
	{
		while (i * i < nb)
		{
			i = i + 2;
			if (nb % i == 0)
				return (0);
		}
		return (1);
	}
}
