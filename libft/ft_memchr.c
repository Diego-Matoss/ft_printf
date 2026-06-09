/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:08:49 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 21:08:52 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Searches for a byte value in memory.
** Returns pointer to first occurrence or NULL if not found.
*/
void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		if (p[i] == (unsigned char)ch)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "Hola mundo";
	int c = ' ';
	int n = 6;
	void *ptr;
	ptr = memchr(str, c, n);
	if (ptr)
		printf("%s\n", (char *)ptr);
	else
		printf("NULL");

	ptr = ft_memchr(str, c, n);
	if (ptr)
		printf("%s\n", (char *)ptr);
	else
		printf("NULL");
	return 0;
} */