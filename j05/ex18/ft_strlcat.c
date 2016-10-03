/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:36:40 by thou              #+#    #+#             */
/*   Updated: 2016/08/16 22:50:51 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
		j++;
	k = 0;
	while (src[k] != 0 && i + k < size - 1)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = 0;
	if (i > size)
		return (j + size);
	else
		return (j + i);
}
