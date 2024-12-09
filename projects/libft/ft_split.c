/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:19:54 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:31:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to print the result of ft_split
void print_split(char **result)
{
    if (!result)
    {
        printf("(null)\n");
        return;
    }
    for (size_t i = 0; result[i] != NULL; i++)
    {
        printf("'%s' ", result[i]);
    }
    printf("\n");
}

// Test function for ft_split
void test_ft_split(const char *test_name, const char *s, char c,
                   char **expected)
{
    printf("Test: %s\n", test_name);
    printf("Input: \"%s\" (separator: '%c')\n", s, c);

    char **result = ft_split(s, c);

    printf("Output: ");
    print_split(result);

    printf("Expected: ");
    print_split(expected);

    int pass = 1;
    if (!result && !expected)
    {
        printf("Result: PASS\n\n");
        return;
    }

    if (!result || !expected)
        pass = 0;
    else
    {
        for (size_t i = 0; result[i] != NULL || expected[i] != NULL; i++)
        {
            if (!result[i] || !expected[i] ||
                strcmp(result[i], expected[i]) != 0)
            {
                pass = 0;
                break;
            }
        }
    }

    printf("Result: %s\n\n", pass ? "PASS" : "FAIL");

    if (result)
    {
        size_t i = 0;
        while (result[i] != NULL)
            free(result[i++]);
        free(result);
    }
}

// Run tests
void run_ft_split_tests(void)
{
    printf("Running tests for ft_split...\n");

    char *expected1[] = {"Hello", "World", NULL};
    test_ft_split("Basic split", "Hello World", ' ', expected1);

    char *expected2[] = {NULL};
    test_ft_split("Empty string", "", ' ', expected2);

    char *expected3[] = {"HelloWorld", NULL};
    test_ft_split("No separator", "HelloWorld", ' ', expected3);

    char *expected4[] = {"Hello", "World", NULL};
    test_ft_split("Consecutive separators", "Hello   World", ' ', expected4);

    char *expected5[] = {NULL};
    test_ft_split("Only separators", "   ", ' ', expected5);

    char *expected6[] = {"Hello", "World", NULL};
    test_ft_split("Separators at edges", "  Hello World  ", ' ', expected6);

    char *expected7[] = {"HelloWorld", NULL};
    test_ft_split("Separator not in string", "HelloWorld", ',', expected7);

    test_ft_split("Null input string", NULL, ' ', NULL);

    char large_input[1024];
    memset(large_input, 'a', 1023);
    large_input[1023] = '\0';
    char *expected9[] = {large_input, NULL};
    test_ft_split("Large input string", large_input, ' ', expected9);

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_split_tests();
    return 0;
} */