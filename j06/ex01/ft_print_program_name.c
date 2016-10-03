/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:53:03 by thou              #+#    #+#             */
/*   Updated: 2016/08/15 19:22:20 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int i, char **j)
{
	int k;

	i = 0;
	k = 0;
	while (j[0][k] != '\0')
	{
		ft_putchar(j[0][k]);
		k++;
	}
	ft_putchar('\n');
	return (0);
}
