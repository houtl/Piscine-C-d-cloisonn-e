/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:33:47 by thou              #+#    #+#             */
/*   Updated: 2016/08/24 01:44:44 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *tmp;
	t_list *tmp2;

	list = *begin_list;
	tmp = list;
	tmp2 = 0;
	while (list)
	{
		if (cmp(list->data, data_ref) != 0)
		{
			tmp = list;
			list = list->next;
		}
		else
		{
			if (list == *begin_list)
				*begin_list = (*begin_list)->next;
			else
				tmp->next = list->next;
			tmp2 = list;
			list = list->next;
			free(tmp2);
		}
	}
}
