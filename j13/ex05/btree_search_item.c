/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:22:27 by thou              #+#    #+#             */
/*   Updated: 2016/08/25 14:00:26 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	if (root == 0)
		return (0);
	if (root->left)
		btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)(data_ref, (*root).item) == 0)
		return (root->item);
	if (root->right)
		btree_search_item(root->right, data_ref, cmpf);
	return (0);
}
