/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:53:02 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/25 18:53:04 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char chr)
{
	if (chr == ' ' || (chr >= 9 && chr <= 13))
		return (1);
	return (0);
}

/*
** Converts a string to an integer.
** Handles whitespace, signs, and stops at non-digit characters.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && (ft_isdigit(nptr[i])))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// static void	test_atoi(char *str)
// {
// 	printf("INPUT: \"%s\"\n", str);
// 	printf("ft_atoi : %d\n", ft_atoi(str));
// 	printf("atoi    : %d\n", atoi(str));
// 	printf("-----------------------------\n");
// }

// int	main(void)
// {
// 	/* Casos básicos */
// 	test_atoi("42");
// 	test_atoi("-42");
// 	test_atoi("+42");
// 	test_atoi("0");

// 	/* Espacios */
// 	test_atoi("     42");
// 	test_atoi("\t\n\v\f\r 123");

// 	/* Signos raros */
// 	test_atoi("--123");
// 	test_atoi("++123");
// 	test_atoi("+-123");
// 	test_atoi("-+123");

// 	/* Caracteres después del número */
// 	test_atoi("123abc");
// 	test_atoi("-42hola");

// 	/* Caracteres antes */
// 	test_atoi("abc123");
// 	test_atoi("hola");

// 	/* Solo signo */
// 	test_atoi("+");
// 	test_atoi("-");

// 	/* String vacío */
// 	test_atoi("");

// 	/* Solo espacios */
// 	test_atoi("      ");

// 	/* Ceros */
// 	test_atoi("00000042");
// 	test_atoi("-0000042");

// 	/* INT MAX y MIN */
// 	test_atoi("2147483647");
// 	test_atoi("-2147483648");

// 	/* Overflow */
// 	test_atoi("2147483648");
// 	test_atoi("-2147483649");

// 	/* Overflow gigante */
// 	test_atoi("999999999999999999999999");
// 	test_atoi("-999999999999999999999999");

// 	/* Mezclas extrañas */
// 	test_atoi("   -00123abc456");
// 	test_atoi("  +000");
// 	test_atoi("42 42");
// 	test_atoi("   --214");
// 	test_atoi("   +214");
// 	test_atoi("   -214");

// 	return (0);
// }