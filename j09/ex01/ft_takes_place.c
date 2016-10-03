/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:46:31 by thou              #+#    #+#             */
/*   Updated: 2016/08/11 19:33:44 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour == 0 || hour == 24)
		write(1, "12.00 A.M. AND 1.00 A.M.\n", 25);
	else if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		write(1, "11.00 A.M. AND 12.00 P.M.\n", 26);
	else if (hour == 12)
		write(1, "12.00 P.M. AND 1.00 P.M.\n", 25);
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	else if (hour == 23)
		write(1, "11.00 P.M. AND 12.00 A.M.\n", 26);
}
