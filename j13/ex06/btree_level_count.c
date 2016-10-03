/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:32:53 by thou              #+#    #+#             */
/*   Updated: 2016/08/25 14:00:51 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	nb;

	nb = 0;
	if (root == 0)
		return (0);
	if (btree_level_count(root->left) > btree_level_count(root->right))
		nb = (1 + btree_level_count(root->left));
	if (btree_level_count(root->left) <= btree_level_count(root->right))
		nb = (1 + btree_level_count(root->right));
	return (nb);
}
