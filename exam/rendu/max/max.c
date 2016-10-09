/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 19:42:53 by exam              #+#    #+#             */
/*   Updated: 2016/08/12 19:58:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int i;
	int j;

	if (len >0)
	{
		i = tab[0];
		j = 1;
		while(j < len)
		{
			if (tab[j] > i)
				i = tab[j];
			j++;
		}
		return (i);
	}
	return (0);
}
