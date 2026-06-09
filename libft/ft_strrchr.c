/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:28:31 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/21 13:28:33 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Searches for the last occurrence of a character in a string.
** Returns pointer to last occurrence or NULL if not found.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
#include "libft.h"

void	test_strrchr(const char *s, int c)
{
	char	*original;
	char	*mine;

	original = strrchr(s, c);
	mine = ft_strrchr(s, c);

	printf("=====================================\n");
	printf("String: \"%s\"\n", s);
	printf("Buscar: '%c' (%d)\n", c, c);

	printf("\nORIGINAL:\n");
	if (original)
		printf("Encontrado: \"%s\"\n", original);
	else
		printf("NULL\n");

	printf("\nMI FUNCION:\n");
	if (mine)
		printf("Encontrado: \"%s\"\n", mine);
	else
		printf("NULL\n");
}

int	main(void)
{
	test_strrchr("Hola mundo", 'o');

	test_strrchr("aaaaaa", 'a');

	test_strrchr("42 Madrid", '4');

	test_strrchr("abcdef", 'z');

	test_strrchr("", 'a');

	test_strrchr("teste", '\0');

	test_strrchr("abcabcabc", 'b');

	test_strrchr("ultima letra x", 'x');

	test_strrchr("abc", 'a');

	return (0);
} */