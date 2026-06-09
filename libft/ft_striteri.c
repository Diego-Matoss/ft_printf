/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:07:26 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/29 18:07:28 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies a function to each character of a string (modifies in-place).
** Function receives index and pointer to character as parameters.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_move_char(unsigned int n, char *c)
{
	*c = *c + n;
}

#include <stdio.h>
int	main(void)
{
	char	string[] = "aaaa";

	ft_striteri(string, ft_move_char);
	printf("%s\n", string);

	return (0);
} */