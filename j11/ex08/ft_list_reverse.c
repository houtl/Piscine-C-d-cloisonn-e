/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:19:40 by thou              #+#    #+#             */
/*   Updated: 2016/08/23 15:19:47 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;

	list = *begin_list;
	*begin_list = 0;
	while (list)
	{
		tmp = list->next;
		list->next = 0;
		list->next = *begin_list;
		*begin_list = list;
		list = tmp;
	}
}
