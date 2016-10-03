/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:16:51 by thou              #+#    #+#             */
/*   Updated: 2016/08/24 20:38:50 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*catch(t_list *begin_list, int n)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (i < n)
	{
		list = list->next;
		i++;
	}
	return (list);
}

int		ft_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	size = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}

void	ft_swap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		i;
	int		j;
	t_list	*data1;
	t_list	*data2;

	size = ft_size(begin_list);
	if (size < 2)
		return ;
	i = 0;
	j = size - 1;
	while (j > i)
	{
		data1 = catch(begin_list, i);
		data2 = catch(begin_list, j);
		ft_swap(&data1->data, &data2->data);
		i++;
		j--;
	}
}
