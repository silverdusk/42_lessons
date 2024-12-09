/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:23:12 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 15:12:24 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	s_len;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;
	new_str = (char *)malloc(substr_len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Helper function to test ft_substr
void test_ft_substr(const char *test_name, const char *s, unsigned int start,
                    size_t len, const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Input string: \"%s\"\n", s ? s : "(null)");
    printf("Start: %u, Length: %zu\n", start, len);

    char *result = ft_substr(s, start, len);

    printf("Output: \"%s\"\n", result ? result : "(null)");
    printf("Expected: \"%s\"\n", expected ? expected : "(null)");

    if ((result == NULL && expected == NULL) || 
        (result && expected && strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");

    free(result);
}

// Run tests for ft_substr
void run_ft_substr_tests(void)
{
    printf("Running tests for ft_substr...\n");

    // Test 1: Extract substring from the middle
    test_ft_substr("Middle of string", "Hello, World!", 7, 5, "World");

    // Test 2: Extract substring at the start
    test_ft_substr("Start of string", "Hello, World!", 0, 5, "Hello");

    // Test 3: Extract with length exceeding string
    test_ft_substr("Length exceeds string", "Hello", 2, 10, "llo");

    // Test 4: Extract past the end of the string
    test_ft_substr("Start past end", "Hello", 10, 5, "");

    // Test 5: Extract entire string
    test_ft_substr("Entire string", "Hello, World!", 0, 20, "Hello, World!");

    // Test 6: Extract with length 0
    test_ft_substr("Length 0", "Hello, World!", 5, 0, "");

    // Test 7: Empty input string
    test_ft_substr("Empty string", "", 0, 5, "");

    // Test 8: Null input string
    test_ft_substr("Null input string", NULL, 5, 5, NULL);

    // Test 9: Start is 0 on empty string
    test_ft_substr("Empty string, start 0", "", 0, 0, "");

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_substr_tests();
    return (0);
} */