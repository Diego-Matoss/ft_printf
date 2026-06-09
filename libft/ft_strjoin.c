/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:02:00 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/27 14:02:01 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenates two strings into a new dynamically allocated string.
** Returns NULL if either input is NULL or memory allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		str_len;
	size_t		s1_len;
	size_t		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_len = s1_len + s2_len;
	str = malloc(str_len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len + 1);
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char *str1 = "hola";
	char *str2 = " mundo";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
	return (0);
} */