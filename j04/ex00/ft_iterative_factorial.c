/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 13:30:02 by thou              #+#    #+#             */
/*   Updated: 2016/08/10 16:32:29 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (nb > 1)
		{
			i = i * (nb - 1);
			nb = nb - 1;
		}
		return (i);
	}
	else
		return (0);
}
