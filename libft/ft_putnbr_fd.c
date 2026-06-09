/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:16:42 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/02 14:16:45 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes an integer to a file descriptor.
** Handles negative numbers and uses recursion for digit separation.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (n < 0)
	{
		nb = -nb;
		ft_putchar_fd ('-', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd (nb / 10, fd);
	}
	c = (nb % 10) + '0';
	ft_putchar_fd (c, fd);
}
