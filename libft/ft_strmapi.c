/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:18:17 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/29 17:18:20 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies a function to each character of a string and returns a new string.
** Function receives index and character as parameters.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char ft_test(unsigned int n, char c)
{
	return (c + n);
}
#include <stdio.h>
int main(void)
{
	char *str = "aaaa";
	char *str2;

	str2 = ft_strmapi(str, &ft_test);
	printf(">%s<\n", str2);
	free(str2);
	return 0;
} */