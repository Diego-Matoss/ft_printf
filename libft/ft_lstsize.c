/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:17:30 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/02 20:17:32 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calculates the size (number of nodes) of a linked list.
** Returns the count of nodes or 0 if list is empty.
*/
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("Hola");
	n2 = ft_lstnew("Mundo");
	n3 = ft_lstnew("42");

	n1->next = n2;
	n2->next = n3;

	printf("Tamaño: %d\n", ft_lstsize(n2));

	free(n1);
	free(n2);
	free(n3);

	return (0);
} */