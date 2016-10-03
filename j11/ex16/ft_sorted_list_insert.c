/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:37:38 by thou              #+#    #+#             */
/*   Updated: 2016/08/24 20:34:13 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	insert(t_list *new, t_list **begin_list, t_list *tmp, t_list *list)
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*list;
	t_list	*new;
	t_list	*tmp;

	list = *begin_list;
	new = ft_create_elem(data);
	if (!list)
	{
		*begin_list = new;
		return ;
	}
	while (list)
	{
		if (cmp(data, list->data) < 0)
		{
			insert(new, begin_list, tmp, list);
			return ;
		}
		tmp = list;
		list = list->next;
	}
	tmp->next = new;
}
