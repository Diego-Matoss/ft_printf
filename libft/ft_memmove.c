/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:08:01 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 19:08:02 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	ft_move_back(unsigned char *dest, unsigned char *src, size_t n)
{
	int	len;

	len = (int)n - 1;
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
}

/*
** Copies memory from source to destination, handling overlapping areas safely.
** Detects overlap and copies in appropriate direction to prevent corruption.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
		ft_move_back(new_dest, new_src, n);
	else
		ft_move(new_dest, new_src, n);
	return (dest);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	{
		char str1[] = "AAAA";
		char str2[] = "BBBB";
		char *dest;
		size_t n = 2;
		dest = ft_memmove(str2, str1, n);
		printf("Caso 1(libft): %s\n", dest);
	}
	{
		char str1[] = "AAAA";
		char str2[] = "BBBB";
		char *dest;
		size_t n = 2;
		dest = memmove(str2, str1, n);
		printf("Caso 1(string): %s\n", dest);
	}
	{
		char buffer[] = "HOLA1234";
		size_t n = 4;
		printf("Buffer antes: >%s<\n", buffer);
		memmove(buffer + 1, buffer, n);
		printf("Caso 2 (intentando solapamiento): >%s<\n", buffer);
	}
	{// memmove gestiona el solapamiento guardando el buffer > tmp
		char buffer[] = "HOLA1234";
		size_t n = 4;
		printf("Buffer antes: >%s<\n", buffer);
		ft_memmove(buffer + 1, buffer, n);
		printf("Caso 2 (intentando solapamiento): >%s<\n", buffer);
	}
	return 0;
} */