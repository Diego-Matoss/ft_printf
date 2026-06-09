/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 13:23:37 by dimatos-          #+#    #+#             */
/*   Updated: 2026/05/25 13:23:38 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char *dst, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && dst[i])
		i++;
	return (i);
}

/*
** Concatenates two strings safely with size limit.
** Returns total length of concatenated string. Truncates if necessary.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = get_len(dst, dstsize);
	src_len = ft_strlen(src);
	if (dst_len == dstsize)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && i < (dstsize - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[10] = "Hola";
	char	dst2[10] = "Hola";

	size_t	ret_ft;
	size_t	ret_real;

	ret_ft = ft_strlcat(dst1, " Mundo", sizeof(dst1));
	ret_real = strlcat(dst2, " Mundo", sizeof(dst2));

	printf("=== FT_STRLCAT ===\n");
	printf("dst: %s\n", dst1);
	printf("return: %zu\n\n", ret_ft);

	printf("=== ORIGINAL STRLCAT ===\n");
	printf("dst: %s\n", dst2);
	printf("return: %zu\n\n", ret_real);

	return (0);
} */