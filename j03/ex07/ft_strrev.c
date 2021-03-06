/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 02:16:42 by thou              #+#    #+#             */
/*   Updated: 2016/08/21 02:30:51 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		n;
	int		i;
	char	str3;

	n = 0;
	while (str[n] != 0)
		n++;
	i = 0;
	while (n - 1 > i)
	{
		str3 = str[i];
		str[i] = str[n - 1];
		str[n - 1] = str3;
		i++;
		n--;
	}
	return (str);
}
