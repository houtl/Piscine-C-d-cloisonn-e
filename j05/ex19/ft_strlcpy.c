/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 23:44:00 by thou              #+#    #+#             */
/*   Updated: 2016/08/16 22:00:07 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int k;

	j = 0;
	while (src[j] != 0)
		j++;
	k = 0;
	while (src[k] != 0 && k < size - 1)
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = 0;
	return (j);
}
