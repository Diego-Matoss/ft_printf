/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 21:34:26 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/24 21:34:27 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies a string safely with size limit.
** Returns the length of the source string. Truncates if necessary.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    const char *origen = "HolaMundo";

    size_t longitud = strlcpy(buffer, origen, sizeof(buffer));

    printf("Cadena copiada: %s\n", buffer);
    printf("Longitud del origen: %zu\n", longitud);

    if (longitud >= sizeof(buffer)) {
        printf("Aviso: La cadena fue truncada.\n");
    }

    return 0;
} */