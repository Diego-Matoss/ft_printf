/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 18:34:03 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/29 18:34:04 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes a single character to a file descriptor.
** Uses the write system call.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
