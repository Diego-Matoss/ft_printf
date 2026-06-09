/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:48:13 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 18:48:14 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies memory from source to destination.
** Does NOT handle overlapping memory areas. Use ft_memmove for overlaps.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	{
// 		char str1[] = "AAAA";
// 		char str2[] = "BBBB";
// 		char *dest;
// 		size_t n = 2;
// 		dest = ft_memcpy(str2, str1, n);
// 		printf("Caso 1 (sin solapamiento): %s\n", dest);
// 	}
// 	{// memcpy no gestiona el solapamiento
// 		char buffer[] = "HOLA1234";
// 		size_t n = 4;
// 		printf("Buffer antes: %s\n", buffer);
// 		ft_memcpy(buffer + 1, buffer, n);
// 		printf("Caso 2 (con solapamiento): %s\n", buffer);
// 	}
// 	return 0;
// }