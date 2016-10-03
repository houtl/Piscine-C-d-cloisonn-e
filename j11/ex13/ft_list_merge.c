/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:06:11 by thou              #+#    #+#             */
/*   Updated: 2016/08/23 19:16:06 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	if (*begin_list1 == 0)
		*begin_list1 = begin_list2;
	else
	{
		list = *begin_list1;
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
}
