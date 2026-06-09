/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 22:12:52 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/21 22:12:53 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills memory area with zero bytes.
** Similar to memset with value 0.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>
#include <strings.h>

void	print_array(unsigned char *arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	unsigned char	arr1[10];
	unsigned char	arr2[10];
	size_t			i;

	i = 0;
	while (i < 10)
	{
		arr1[i] = i + 1;
		arr2[i] = i + 1;
		i++;
	}

	ft_bzero(arr1, 0);
	bzero(arr2, 0);

	printf("ft_bzero: ");
	print_array(arr1, 10);

	printf("original : ");
	print_array(arr2, 10);

	return (0);
} */