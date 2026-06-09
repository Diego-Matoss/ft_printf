/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:06:21 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/19 16:06:24 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests if a character is within ASCII range (0-127).
** Returns non-zero if true, 0 if false.
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
