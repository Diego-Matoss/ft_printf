/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:59:56 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/27 14:59:57 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
** Removes characters from the beginning and end of a string based on a charset.
** Returns a new dynamically allocated trimmed string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	str_len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char_inset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_inset(s1[end - 1], set))
		end--;
	str_len = end - start;
	str = ft_substr(s1, start, str_len);
	return (str);
}

/* #include <stdio.h>

int main(void)
{
	char *string = "--Hola--";
	char *string2 = "Hola--";
	char *string3 = "s+-+Hola--";
	char *string4 = "+-+Hola";
	char *set = "-";
	printf("%s\n", ft_strtrim(string, set));
	printf("%s\n", ft_strtrim(string2, set));
	printf("%s\n", ft_strtrim(string3, set));
	printf("%s\n", ft_strtrim(string4, set));
	return (0);
} */