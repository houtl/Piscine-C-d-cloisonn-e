/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:11:47 by exam              #+#    #+#             */
/*   Updated: 2016/11/08 11:32:34 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;

	i = end - start;
	if (i < 0)
		i = 0 - i;
	tab = (int*)malloc((int) sizeof(i + 1));
	while (start != end)
	{
		tab[i] = start;
		if (start > end)
			start--;
		else
			start++;
		i--;
	}
	tab[0] = start;
	return (tab);
}
