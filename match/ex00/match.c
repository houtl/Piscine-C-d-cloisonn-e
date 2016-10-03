/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:43:16 by thou              #+#    #+#             */
/*   Updated: 2016/08/14 16:31:48 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match2(char *s1, char *s2)
{
	int j;

	if (s2[0] == 0)
		return (1);
	if (s1[0] == 0)
		return (0);
	if (s2[0] == 42)
		return (match2(&s1[0], &s2[1]));
	if (s1[0] != s2[0])
		return (match2(&s1[1], &s2[0]));
	else
	{
		j = 1;
		while (s1[j] != 0 || s2[j] != 0)
		{
			if (s2[j] == 42)
				return (match2(&s1[j], &s2[j + 1]));
			if (s1[j] != s2[j])
				return (match2(&s1[1], &s2[0]));
			if (s1[j] == s2[j])
				j++;
		}
		return (1);
	}
}

int	match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s2[i] == 42)
			return (match2(&s1[i], &s2[i + 1]));
		else if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	return (1);
}
