/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 01:49:23 by thou              #+#    #+#             */
/*   Updated: 2016/08/25 01:38:56 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	insertele(t_list *new, t_list **begin_list, t_list *tmp, t_list *list)
{
	if (list == *begin_list)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		tmp->next = new;
		new->next = list;
	}
}

void	listinsert(t_list **begin_list, t_list *new, int (*cmp)())
{
	t_list	*list;
	t_list	*tmplis;

	list = *begin_list;
	if (!list)
	{
		*begin_list = new;
		return ;
	}
	while (list)
	{
		if (cmp(new->data, list->data) < 0)
		{
			insertele(new, begin_list, tmplis, list);
			return ;
		}
		tmplis = list;
		list = list->next;
	}
	tmplis->next = new;
}

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	t_list	*list;
	t_list	*new;

	list = begin_list2;
	while (list)
	{
		new = list;
		list = list->next;
		new->next = NULL;
		listinsert(begin_list1, new, cmp);
	}
}
