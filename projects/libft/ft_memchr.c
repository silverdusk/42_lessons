/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:14:41 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:24:20 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
#include "libft.h"

// Helper function to test ft_memchr
void test_memchr(const void *s, int c, size_t n, const char *expected)
{
    const char *result = (const char *)ft_memchr(s, c, n);

    if ((result == NULL && expected == NULL) || 
		(result != NULL && strcmp(result, expected) == 0))
    {
        printf("Test passed: memchr(\"%s\", '%c', %zu) -> \"%s\"\n",
               (const char *)s, c, n, result ? result : "NULL");
    }
    else
    {
        printf("Test failed: memchr(\"%s\", '%c', %zu) -> \"%s\" "
               "(expected \"%s\")\n",
               (const char *)s, c, n, result ? result : "NULL", 
               expected ? expected : "NULL");
    }
}

// Test function
void run_memchr_tests(void)
{
    printf("Running tests for ft_memchr...\n");

    // Test 1: Character found in the middle
    test_memchr("Hello, World!", 'W', 13, "World!");

    // Test 2: Character found at the beginning
    test_memchr("Hello, World!", 'H', 13, "Hello, World!");

    // Test 3: Character found at the end
    test_memchr("Hello, World!", '!', 13, "!");

    // Test 4: Character not found
    test_memchr("Hello, World!", 'z', 13, NULL);

    // Test 5: Search length shorter than string
    test_memchr("Hello, World!", 'W', 5, NULL);

    // Test 6: Search length includes the character
    test_memchr("Hello, World!", ',', 7, ", World!");

    // Test 7: Empty string
    test_memchr("", 'a', 5, NULL);

    // Test 8: Null byte within the string
    test_memchr("Hello\0World", 'W', 11, "World");

    // Test 9: Null byte as the search character
    test_memchr("Hello\0World", '\0', 11, "\0World");

    printf("All tests completed.\n");
}

int main(void)
{
    run_memchr_tests();
    return 0;
} */