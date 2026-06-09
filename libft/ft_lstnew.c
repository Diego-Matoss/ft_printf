/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:22:39 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/02 19:22:41 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates a new list node with given content.
** Returns NULL if memory allocation fails.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

/* #include <stdio.h>
int main(void)
{
	char *str;
	t_list *node;

	str = "hola";
	node = ft_lstnew(str);

	printf("content = %s\n", (char *)node->content);

	if (node->next == NULL)
		printf("next es NULL\n");

	free(node);
	return (0);
} */