/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:18:02 by thou              #+#    #+#             */
/*   Updated: 2016/08/24 20:35:18 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	change1(t_list **begin_list)
{
	t_list	*tmp;

	tmp = (*begin_list)->next;
	(*begin_list)->next = tmp->next;
	tmp->next = *begin_list;
	*begin_list = tmp;
}

void	change2(t_list *tmp1, t_list *list)
{
	t_list	*tmp2;

	tmp1->next = list->next;
	tmp2 = list->next;
	list->next = tmp2->next;
	tmp2->next = list;
	list = tmp2;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp1;

	if (*begin_list)
	{
		list = *begin_list;
		while (list->next)
		{
			if (cmp(list->data, list->next->data) > 0)
			{
				if (list == *begin_list)
					change1(begin_list);
				else
					change2(tmp1, list);
				list = *begin_list;
			}
			else
			{
				tmp1 = list;
				list = list->next;
			}
		}
	}
}
