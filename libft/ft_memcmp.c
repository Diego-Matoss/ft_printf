/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:24:02 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 21:24:04 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two memory areas byte by byte.
** Returns 0 if equal, or difference of first non-matching bytes.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	{
		char *str1 = "aaaa";
		char *str2 = "aaaa";
		int n = 2;
		printf("%d\n", memcmp(str1, str2, n));
		printf("%d\n", ft_memcmp(str1, str2, n));
	}
	{
		char *str1 = "aaaa";
		char *str2 = "bbbb";
		int n = 2;
		printf("%d\n", memcmp(str1, str2, n));
		printf("%d\n", ft_memcmp(str1, str2, n));
	}
	{
		char *str1 = "aaaa";
		char *str2 = "aaaa";
		int n = 0;
		printf("%d\n", memcmp(str1, str2, n));
		printf("%d\n", ft_memcmp(str1, str2, n));
	}
	return 0;
} */