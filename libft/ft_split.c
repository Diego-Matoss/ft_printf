/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimatos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 14:38:14 by dimatos-          #+#    #+#             */
/*   Updated: 2026/06/02 14:38:16 by dimatos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	in_word;
	size_t	words;
	size_t	i;

	in_word = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			words++;
			in_word = 1;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**free_split(char **split, size_t j)
{
	while (j > 0)
	{
		j--;
		free(split[j]);
	}
	free(split);
	return (NULL);
}

static char	**fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			len = word_len(&s[i], c);
			split[j] = ft_substr(s, i, len);
			if (!split[j])
				return (free_split(split, j));
			j++;
			i += len;
		}
	}
	split[j] = NULL;
	return (split);
}

/*
** Splits a string by a delimiter into an array of strings.
** Returns a NULL-terminated array of dynamically allocated strings.
*/
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c));
}

/* #include <stdio.h>
#include <stdlib.h>

static void print_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		printf("[%s]", split[i]);
		i++;
	}
}

static void	free_result(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(void)
{
	char	**split;

	split = ft_split("::::", ':');
	if (!split)
	{
		printf("split es NULL\n");
		return (0);
	}
	print_split(split);
	free_result(split);
	return (0);
} */