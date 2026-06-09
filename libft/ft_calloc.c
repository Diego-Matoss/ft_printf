/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 18:41:45 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/26 18:41:46 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for an array and initializes it to zero.
** Prevents integer overflow and returns NULL on failure.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > (size_t)(-1) / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdint.h>

// static void	print_bytes(void *ptr, size_t total)
// {
// 	size_t			i;
// 	unsigned char	*p;

// 	p = (unsigned char *)ptr;
// 	i = 0;
// 	while (i < total)
// 	{
// 		printf("%d ", p[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// static void	test_calloc(size_t nmemb, size_t size)
// {
// 	void	*my_ptr;
// 	void	*real_ptr;
// 	size_t	total;

// 	total = nmemb * size;
// 	my_ptr = ft_calloc(nmemb, size);
// 	real_ptr = calloc(nmemb, size);

// 	printf("nmemb: %zu | size: %zu\n", nmemb, size);
// 	printf("ft_calloc : %p\n", my_ptr);
// 	printf("calloc    : %p\n", real_ptr);

// 	if (my_ptr && real_ptr && total <= 30)
// 	{
// 		printf("ft_calloc bytes: ");
// 		print_bytes(my_ptr, total);
// 		printf("calloc bytes   : ");
// 		print_bytes(real_ptr, total);
// 	}

// 	if ((my_ptr == NULL && real_ptr == NULL) || (my_ptr && real_ptr))
// 		printf("RESULT: OK\n");
// 	else
// 		printf("RESULT: DIFFERENT\n");

// 	free(my_ptr);
// 	free(real_ptr);
// 	printf("--------------------------------\n");
// }

// int	main(void)
// {
// 	test_calloc(5, sizeof(int));
// 	test_calloc(10, sizeof(char));
// 	test_calloc(0, sizeof(int));
// 	test_calloc(5, 0);
// 	test_calloc(0, 0);
// 	test_calloc(1, 1);
// 	test_calloc(30, 1);
// 	test_calloc(3, 10);

// 	/* Casos grandes / overflow */
// 	test_calloc(SIZE_MAX, 2);
// 	test_calloc(SIZE_MAX / 2 + 1, 2);
// 	test_calloc(SIZE_MAX / 4 + 1, 4);

// 	return (0);
// }