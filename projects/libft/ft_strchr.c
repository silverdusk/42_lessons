/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:51:11 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:23:36 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to test ft_strchr
void test_ft_strchr(const char *test_name, const char *s, int c,
                    const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Input: \"%s\"\n", s ? s : "(null)");
    printf("Character to find: '%c' (ASCII %d)\n", (char)c, c);

    char *result = ft_strchr(s, c);

    printf("Output: ");
    if (result)
        printf("\"%s\"\n", result);
    else
        printf("(null)\n");

    printf("Expected: ");
    if (expected)
        printf("\"%s\"\n", expected);
    else
        printf("(null)\n");

    int pass = 1;
    if ((result == NULL && expected == NULL) || (result && expected &&
        strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");

    // Free memory
    if (result)
    {
        size_t i = 0;
        while (result[i] != NULL)
        {
            free(result[i]);
            i++;
        }
        free(result);
    }
}

// Run tests for ft_strchr
void run_ft_strchr_tests(void)
{
    printf("Running tests for ft_strchr...\n");
    // Test 1: Find a character in the middle
    test_ft_strchr("Character in the middle", "Hello, World!", 'W', "World!");
    // Test 2: Find the first character
    test_ft_strchr("First character", "Hello, World!", 'H', "Hello, World!");
    // Test 3: Find the null terminator
    test_ft_strchr("Null terminator", "Hello, World!", '\0', "");
    // Test 4: Character not in string
    test_ft_strchr("Character not in string", "Hello, World!", 'x', NULL);
    // Test 5: Empty string
    test_ft_strchr("Empty string", "", 'H', NULL);
    // Test 6: Empty string with null terminator
    test_ft_strchr("Empty string null terminator", "", '\0', "");
    // Test 7: Multiple occurrences (return first occurrence)
    test_ft_strchr("Multiple occurrences", "bananas", 'a', "ananas");
    // Test 8: String with special characters
    test_ft_strchr("Special characters", "Hello, \tWorld!", '\t', "\tWorld!");
    // Test 9: Null input string
    test_ft_strchr("Null input string", NULL, 'H', NULL);

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_strchr_tests();
    return 0;
} */