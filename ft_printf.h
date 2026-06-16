/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <dimatos-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:43:08 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/16 16:33:56 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	print_char(char c);
int	print_string(char *str);
int	ft_intlen(int n);
int	ft_unsignedlen(unsigned int n);
int	print_number(int n);
int	print_unsigned_int(unsigned int n);
int	print_hex(unsigned int n, char *base);
int	print_hexpointer(unsigned long n, char *base);
int	print_pointer(void *ptr, char *base);
int	ft_printf(char const *str, ...);

#endif