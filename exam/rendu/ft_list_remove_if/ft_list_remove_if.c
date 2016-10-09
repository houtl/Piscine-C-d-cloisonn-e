/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 12:58:19 by exam              #+#    #+#             */
/*   Updated: 2016/08/26 13:48:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*removebegin(t_list **begin_list, t_list *list)
{
	*begin_list = (*begin_list)->next;
	free(list);
	list = *begin_list;
	return (list);
}

t_list	*remove(t_list *list, t_list *tmp)
{
	tmp->next = list->next;
	free(list);
	list = tmp->next;
	return (list);
}

void	ft_list_remove_if(t_list **begin_list,
		void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;
	
	list = *begin_list;
	tmp = list;
	while (list)
	{
		if (cmp((list->data), data_ref) == 0)
		{
			if (list == *begin_list)
				list = removebegin((&*begin_list), list);
			else
				list = remove(list, tmp);
		}
		else
		{
			tmp = list;
			list = list->next;
		}
	}
}
