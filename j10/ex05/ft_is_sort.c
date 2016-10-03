/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 16:08:33 by thou              #+#    #+#             */
/*   Updated: 2016/08/22 16:23:44 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length < 3)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0 && i + 2 < length)
		i++;
	if (i + 2 == length)
		return (1);
	if (f(tab[i], tab[i + 1]) > 0)
	{
		while (f(tab[i], tab[i + 1]) >= 0 && i + 1 < length)
			i++;
		if (i + 1 == length)
			return (1);
		return (0);
	}
	else
	{
		while (f(tab[i], tab[i + 1]) <= 0 && i + 1 < length)
			i++;
		if (i + 1 == length)
			return (1);
		return (0);
	}
}
