/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:25:02 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 15:04:50 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (!*needle)
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		h++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

// Helper function to test ft_strnstr
void test_ft_strnstr(const char *test_name, const char *haystack,
                     const char *needle, size_t len, const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Haystack: \"%s\"\n", haystack ? haystack : "(null)");
    printf("Needle: \"%s\"\n", needle ? needle : "(null)");
    printf("Length: %zu\n", len);

    char *result = ft_strnstr(haystack, needle, len);

    printf("Output: \"%s\"\n", result ? result : "(null)");
    printf("Expected: \"%s\"\n", expected ? expected : "(null)");

    if (result == expected || (result && expected &&
        strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");
}

// Run tests for ft_strnstr
void run_ft_strnstr_tests(void)
{
    printf("Running tests for ft_strnstr...\n");

    char *haystack;
    char large_haystack[1024];

    test_ft_strnstr("Basic match", "Hello, World!", "World", 13, "World!");
    test_ft_strnstr("No match", "Hello, World!", "Earth", 13, NULL);
    test_ft_strnstr("Match at beginning", "Hello, World!", "Hello", 13,
                    "Hello, World!");
    test_ft_strnstr("Empty needle", "Hello, World!", "", 13, "Hello, World!");
    test_ft_strnstr("Needle longer than haystack", "Hello", "Hello, World!",
                    13, NULL);
    test_ft_strnstr("Partial match", "Hello, World!", "Worlds", 13, NULL);
    test_ft_strnstr("Limited length match", "Hello, World!", "World", 7, NULL);
    test_ft_strnstr("Exact length match", "Hello, World!", "World", 11,
                    "World!");
    test_ft_strnstr("Match at end", "Hello, World!", "!", 13, "!");
    test_ft_strnstr("Empty haystack", "", "Hello", 5, NULL);
    test_ft_strnstr("Both empty", "", "", 0, "");

    memset(large_haystack, 'a', 1023);
    large_haystack[1023] = '\0';
    test_ft_strnstr("Large haystack", large_haystack, "aaa", 1024,
                    large_haystack);

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_strnstr_tests();
    return (0);
} */