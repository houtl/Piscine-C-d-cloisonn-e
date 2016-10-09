/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 12:23:00 by exam              #+#    #+#             */
/*   Updated: 2016/08/26 12:52:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int	i;
	int	j;
	int	len;
	int	*tab;
	
	len = ((end > start) ? (end - start + 1) : (start - end + 1));
	tab = (int*)malloc(sizeof(int) * (len));
	i = end;
	j = 0;
	while (i != start)
	{
		tab[j++] = ((end > start) ? (i--) : (i++));
	}
	tab[j] = start;
	return (tab);
}
