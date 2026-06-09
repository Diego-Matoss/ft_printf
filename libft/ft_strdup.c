/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:12:40 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/26 15:12:41 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Duplicates a string by allocating new memory and copying content.
** Returns NULL if memory allocation fails.
*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*new_string;

	len = ft_strlen(s) + 1;
	new_string = malloc(sizeof(char) * len);
	if (!new_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_string[i] = s[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// static void	test_strdup(char *str)
// {
// 	char	*my_copy;
// 	char	*real_copy;

// 	my_copy = ft_strdup(str);
// 	real_copy = strdup(str);

// 	printf("INPUT            : \"%s\"\n", str);

// 	if (my_copy == NULL || real_copy == NULL)
// 	{
// 		printf("Malloc failed\n");
// 		free(my_copy);
// 		free(real_copy);
// 		return ;
// 	}

// 	printf("ft_strdup        : \"%s\"\n", my_copy);
// 	printf("original strdup  : \"%s\"\n", real_copy);

// 	/* Comparar contenido */
// 	if (strcmp(my_copy, real_copy) == 0)
// 		printf("RESULT           : OK\n");
// 	else
// 		printf("RESULT           : DIFFERENT\n");

// 	/* Comprobar memoria independiente */
// 	my_copy[0] = '*';

// 	printf("\nAfter modifying ft_strdup copy:\n");
// 	printf("ft_strdup copy   : \"%s\"\n", my_copy);
// 	printf("original string  : \"%s\"\n", str);

// 	free(my_copy);
// 	free(real_copy);

// 	printf("--------------------------------------\n");
// }

// int	main(void)
// {
// 	/* Caso normal */
// 	test_strdup("Hola mundo");

// 	/* String vacío */
// 	test_strdup("");

// 	/* Un solo carácter */
// 	test_strdup("a");

// 	/* Espacios */
// 	test_strdup("     ");

// 	/* Números */
// 	test_strdup("123456789");

// 	/* Símbolos */
// 	test_strdup("!@#$%^&*()");

// 	/* Mezcla rara */
// 	test_strdup("Hola\t\n42");

// 	/* String largo */
// 	test_strdup("Lorem ipsum dolor sit amet consectetur adipiscing elit");

// 	/* Muchísimos caracteres */
// 	test_strdup("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

// 	return (0);
// }