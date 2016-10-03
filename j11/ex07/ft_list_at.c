/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:55:12 by thou              #+#    #+#             */
/*   Updated: 2016/08/24 21:38:57 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	list = begin_list;
	if (list == 0)
		return (list);
	i = 0;
	while (i < nbr && list)
	{
		list = list->next;
		i++;
	}
	if (i == nbr)
		return (list);
	else
		return (NULL);
}
