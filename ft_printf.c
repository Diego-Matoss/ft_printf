/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <dimatos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:38:09 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/09 19:38:11 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	char	*s;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
			{
				s = va_arg(args, char *);
				ft_putstr_fd(s, 1);
				count += ft_strlen(s);
			}
			else if (str[i + 1] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				count++;
			}
			else if (str[i + 1] == 'd')
			{
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
int main(void)
{
	ft_printf("Hola\n");
	ft_printf("Hola %d\n", 12345);
	ft_printf("%s\n", "Prueba");
	ft_printf("A %s B\n", "TEST");

	return (0);
}