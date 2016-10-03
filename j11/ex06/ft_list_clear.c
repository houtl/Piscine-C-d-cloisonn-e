/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:14:16 by thou              #+#    #+#             */
/*   Updated: 2016/08/23 17:42:44 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list1;
	t_list	*list2;

	list1 = *begin_list;
	while (list1)
	{
		list2 = list1->next;
		free(list1);
		list1 = list2;
	}
	*begin_list = 0;
}
