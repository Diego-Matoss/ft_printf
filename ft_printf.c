/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <dimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:38:09 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 20:34:43 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_formats(char c, va_list args)
{
	char	*base_hex;
	char	*base_upperhex;

	base_hex = "0123456789abcdef";
	base_upperhex = "0123456789ABCDEF";
	if (c == '%')
		return (print_char(c));
	else if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_string(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (print_number(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsigned_int(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_hex(va_arg(args, unsigned int), base_hex));
	else if (c == 'X')
		return (print_hex(va_arg(args, unsigned int), base_upperhex));
	else if (c == 'p')
		return (print_pointer(va_arg(args, void *), base_hex));
	else
		return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!str)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += print_formats(str[i], args);
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/* #include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

static void	print_separator(void)
{
	printf("\n----------------------------------------\n\n");
}

int	main(void)
{
	int		r1;
	int		r2;
	int		x;

	x = 42;

	print_separator();

	printf("TEST CHAR\n");
	r1 = printf("printf    : [%c]\n", 'A');
	r2 = ft_printf("ft_printf : [%c]\n", 'A');
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST STRING\n");
	r1 = printf("printf    : [%s]\n", "hello world");
	r2 = ft_printf("ft_printf : [%s]\n", "hello world");
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST POINTER\n");
	r1 = printf("printf    : [%p]\n", (void *)&x);
	r2 = ft_printf("ft_printf : [%p]\n", (void *)&x);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST NULL POINTER\n");
	r1 = printf("printf    : [%p]\n", (void *)NULL);
	r2 = ft_printf("ft_printf : [%p]\n", (void *)NULL);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST DECIMAL POSITIVE\n");
	r1 = printf("printf    : [%d]\n", 12345);
	r2 = ft_printf("ft_printf : [%d]\n", 12345);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST DECIMAL NEGATIVE\n");
	r1 = printf("printf    : [%d]\n", -12345);
	r2 = ft_printf("ft_printf : [%d]\n", -12345);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INT MAX\n");
	r1 = printf("printf    : [%d]\n", INT_MAX);
	r2 = ft_printf("ft_printf : [%d]\n", INT_MAX);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INT MIN\n");
	r1 = printf("printf    : [%d]\n", INT_MIN);
	r2 = ft_printf("ft_printf : [%d]\n", INT_MIN);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST INTEGER i\n");
	r1 = printf("printf    : [%i]\n", -42);
	r2 = ft_printf("ft_printf : [%i]\n", -42);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST UNSIGNED\n");
	r1 = printf("printf    : [%u]\n", 4294967295U);
	r2 = ft_printf("ft_printf : [%u]\n", 4294967295U);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX LOWERCASE\n");
	r1 = printf("printf    : [%x]\n", 450);
	r2 = ft_printf("ft_printf : [%x]\n", 450);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX UPPERCASE\n");
	r1 = printf("printf    : [%X]\n", 450);
	r2 = ft_printf("ft_printf : [%X]\n", 450);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST HEX MAX UNSIGNED\n");
	r1 = printf("printf    : [%x]\n", 4294967295U);
	r2 = ft_printf("ft_printf : [%x]\n", 4294967295U);
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	printf("TEST PERCENT\n");
	r1 = printf("printf    : [%%]\n");
	r2 = ft_printf("ft_printf : [%%]\n");
	printf("returns   : printf = %d | ft_printf = %d\n", r1, r2);

	print_separator();

	return (0);
} */