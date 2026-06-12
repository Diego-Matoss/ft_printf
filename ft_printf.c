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

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			if (str[i] == '%')
				count += print_char(str[i]);
			else if (str[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (str[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				count += print_number(va_arg(args, int));
			else if (str[i] == 'u')
				count += print_unsigned_int(va_arg(args, unsigned int));
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/* #include <limits.h>
#include <stdio.h>
int main(void)
{
	ft_printf("ft:Hola %i\n", 12345);
	ft_printf("ft:Hola %% que tal\n");
	ft_printf("ft:Hola %c\n", 'c');
	ft_printf("ft:Hola %u\n", 0U);
	

	printf("Hola %i\n", 12345);
	printf("Hola %% que tal\n");
	printf("Hola %c\n", 'c');
	printf("Hola %u\n", 0U);
	return (0);
} */