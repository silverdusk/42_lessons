/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:10:21 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 15:08:53 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

// Helper function to test ft_strrchr
void test_ft_strrchr(const char *test_name, const char *s, int c,
                     const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Input string: \"%s\"\n", s ? s : "(null)");
    printf("Character to find: '%c' (ASCII %d)\n", (char)c, c);

    char *result = ft_strrchr(s, c);

    printf("Output: \"%s\"\n", result ? result : "(null)");
    printf("Expected: \"%s\"\n", expected ? expected : "(null)");

    if ((result == NULL && expected == NULL) || 
        (result && expected && strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");
}

// Run tests for ft_strrchr
void run_ft_strrchr_tests(void)
{
    printf("Running tests for ft_strrchr...\n");

    // Test 1: Find character in the middle
    test_ft_strrchr("Find in middle", "Hello, World!", 'o', "orld!");

    // Test 2: Find last occurrence at end
    test_ft_strrchr("Find at end", "Hello, World!", '!', "!");

    // Test 3: Find null terminator
    test_ft_strrchr("Find null terminator", "Hello", '\0', "");

    // Test 4: Character not in string
    test_ft_strrchr("Not in string", "Hello, World!", 'x', NULL);

    // Test 5: Find first character
    test_ft_strrchr("Find first character", "Hello, World!", 'H',
                    "Hello, World!");

    // Test 6: Multiple occurrences (return last occurrence)
    test_ft_strrchr("Multiple occurrences", "bananas", 'a', "as");

    // Test 7: Empty string
    test_ft_strrchr("Empty string", "", 'a', NULL);

    // Test 8: Empty string with null terminator
    test_ft_strrchr("Empty string null terminator", "", '\0', "");

    // Test 9: String with special characters
    test_ft_strrchr("Special characters", "\tHello\nWorld!", '\n',
                    "World!");

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_strrchr_tests();
    return (0);
} */