/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:19:54 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/23 15:45:57 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ft_word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

size_t	ft_extract_words(const char *s, char c, char **split)
{
	size_t	i;
	size_t	alloc_words;
	int		index;

	if (!s || !split)
		return (0);
	i = 0;
	alloc_words = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[alloc_words] = ft_word_dup(s, index, i);
			if (!split[alloc_words])
				return (alloc_words);
			alloc_words++;
			index = -1;
		}
		i++;
	}
	return (alloc_words);
}

static void	ft_free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	total_words;
	size_t	extracted_words;
	char	**split;

	if (!s)
		return (NULL);
	total_words = ft_count_words(s, c);
	split = malloc((total_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	extracted_words = ft_extract_words(s, c, split);
	if (extracted_words != total_words)
	{
		ft_free_split(split, extracted_words);
		return (NULL);
	}
	split[total_words] = NULL;
	return (split);
}
