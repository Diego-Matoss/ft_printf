/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 18:16:23 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/02 18:16:25 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/*
** Converts an integer to a string representation.
** Handles negative numbers and allocates memory for the result.
*/
char	*ft_itoa(int n)
{
	char	*array;
	long	num;
	int		size;

	num = n;
	size = count_len(n);
	array = malloc(sizeof(char) * (size + 1));
	if (!array)
		return (NULL);
	array[size] = '\0';
	if (num < 0)
	{
		array[0] = '-';
		num = -num;
	}
	if (num == 0)
		array[0] = '0';
	while (num != 0)
	{
		array[size - 1] = (num % 10) + 48;
		size--;
		num = num / 10;
	}
	return (array);
}

/* #include <stdio.h>
int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
} */