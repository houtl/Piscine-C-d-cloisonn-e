/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 12:12:04 by thou              #+#    #+#             */
/*   Updated: 2016/08/17 12:42:42 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (max <= min)
		return (0);
	*range = (int*)malloc(sizeof(int) * (max - min + 1));
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	range[0][i] = 0;
	return (i);
}
