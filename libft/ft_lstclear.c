/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 20:25:25 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/04 20:25:26 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes all nodes of a linked list using a delete function.
** Sets list pointer to NULL. Does nothing if list or delete function is NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		ft_lstdelone(node, del);
		node = next;
	}
	*lst = NULL;
}
