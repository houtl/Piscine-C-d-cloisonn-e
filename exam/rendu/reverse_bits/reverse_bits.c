/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 10:54:47 by exam              #+#    #+#             */
/*   Updated: 2016/08/26 12:18:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int fois(int l)
{
	int i;

	i = 1;
	while (l > 0)
	{
		i = i * 2;
		l--;
	}
	return (i);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	c[9];
	unsigned char a;

	i = octet;
	j = 0;
	while (i != 0)
	{
		c[j] = i % 2 + '0';
		i = i / 2;
		j++;
	}
	c[j] = 0;
	j = 0;
	k = 0;
	l = 7;
	while (c[j] != 0)
	{
		k = k + (c[j++] - '0') * fois(l--);
	}
	a = k;
	return (a);
}
