/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 17:31:42 by thou              #+#    #+#             */
/*   Updated: 2016/08/16 23:06:58 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alnu(char c)
{
	if (c >= 48 && c <= 122)
	{
		if (c < 58 || (c > 64 && c < 91) || c > 96)
			return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] > 96 && str[0] < 123 && str[0] != '\0')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (alnu(str[i]))
		{
			if (str[i] > 96 && str[i] < 123 && !alnu(str[i - 1]))
				str[i] = str[i] - 32;
			if (str[i] > 64 && str[i] < 91 && alnu(str[i - 1]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
