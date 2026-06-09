/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:28:30 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/21 14:28:33 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two strings up to n characters.
** Returns 0 if equal, or difference of first non-matching characters.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (s1[i] || s2[i]))
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
	char *str1 = NULL;
	char *str2 = "añbbb";
	int n;
	n = 0;
	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
	n = 2;
	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
	n = 1;
	printf("Valor devuelto por libc: %d\n", strncmp(str1, str2, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str1, str2, n));
	printf("Valor devuelto por libc: %d\n", strncmp(str2, str1, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str2, str1, n));
	n = 1;
	char str11[] = {255};
	char str22[] = {0};
	printf("Valor devuelto por libc: %d\n", strncmp(str11, str22, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str11, str22, n));
	printf("Valor devuelto por libc: %d\n", strncmp(str22, str11, n));
	printf("Valor devuelto por lift: %d\n", ft_strncmp(str22, str11, n));
	return 0;
} */