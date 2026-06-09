/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:04:35 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/21 17:04:37 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills memory area with a specific byte value.
** Returns the pointer to the memory area.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// void	print_bytes(unsigned char *ptr, size_t size)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%02X ", ptr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char	str1[20];
// 	char	str2[20];

// 	/* ========================= */
// 	/* TEST 1: memset normal */
// 	/* ========================= */

// 	ft_memset(str1, 'A', 10);
// 	memset(str2, 'A', 10);

// 	str1[10] = '\0';
// 	str2[10] = '\0';

// 	printf("FT : %s\n", str1);
// 	printf("OG : %s\n\n", str2);

// 	/* ========================= */
// 	/* TEST 2: poner 0 */
// 	/* ========================= */

// 	ft_memset(str1, 0, 20);
// 	memset(str2, 0, 20);

// 	printf("FT : %s\n", str1);
// 	printf("OG : %s\n\n", str2);

// 	/* ========================= */
// 	/* TEST 3: valor numerico */
// 	/* ========================= */

// 	ft_memset(str1, 42, 5);
// 	memset(str2, 42, 5);

// 	printf("FT bytes: ");
// 	print_bytes((unsigned char *)str1, 5);

// 	printf("OG bytes: ");
// 	print_bytes((unsigned char *)str2, 5);

// 	printf("\n");

// 	/* ========================= */
// 	/* TEST 4: n = 0 */
// 	/* ========================= */

// 	strcpy(str1, "Hola");
// 	strcpy(str2, "Hola");

// 	ft_memset(str1, 'Z', (0));
// 	memset(str2, 'Z', (0));

// 	printf("FT : %s\n", str1);
// 	printf("OG : %s\n\n", str2);

// 	return (0);
// }