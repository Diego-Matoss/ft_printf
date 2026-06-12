/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <dimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:46:36 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/11 20:09:49 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	ft_putnbr_fd(n, 1);
	return (ft_intlen(n));
}

int	print_unsigned_int(unsigned int n)
{
	unsigned int	num;
	int				len;
	char			c;

	num = n;
	len = ft_unsignedlen(num);
	if (num >= 10)
	{
		print_unsigned_int(num / 10);
	}
	c = (num % 10) + '0';
	write (1, &c, 1);
	return (len);
}
