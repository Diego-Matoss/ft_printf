/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 19:38:05 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/26 19:38:06 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Extracts a substring starting at position 'start' with maximum length 'len'.
** Returns a new dynamically allocated string or NULL on failure.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_length;
	size_t	sub_length;
	char	*str;

	if (s == NULL)
		return (NULL);
	str_length = ft_strlen(s);
	if (start >= str_length)
		return (ft_strdup (""));
	else if (len > str_length - start)
		sub_length = str_length - start;
	else
		sub_length = len;
	str = malloc(sizeof(char) * (sub_length + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, sub_length + 1);
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	//char string[] = "Hola mundo";
	char *substr = ft_substr("hola", 4294967295, 0);
	printf("%s\n", substr);
	return (0);
} */