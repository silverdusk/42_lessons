/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:11:17 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:35:08 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

// Helper function to test ft_memcmp
void test_memcmp(const char *s1, const char *s2, size_t n, int expected)
{
    int result = ft_memcmp(s1, s2, n);

    if (result == expected || (result > 0 && expected > 0) || 
        (result < 0 && expected < 0))
    {
        printf("Test passed: memcmp(\"%s\", \"%s\", %zu) -> %d\n",
               s1, s2, n, result);
    }
    else
    {
        printf("Test failed: memcmp(\"%s\", \"%s\", %zu) -> %d "
               "(expected %d)\n", s1, s2, n, result, expected);
    }
}

// Test function
void run_memcmp_tests(void)
{
    printf("Running tests for ft_memcmp...\n");

    // Test 1: Identical strings
    test_memcmp("Hello, World!", "Hello, World!", 13, 0);

    // Test 2: Different strings (difference in the middle) 
	//('W' - 'w' = 87 - 119 = -32)
    test_memcmp("Hello, World!", "Hello, world!", 13, 'W' - 'w');

    // Test 3: Different strings (difference at the end)
    test_memcmp("Hello!", "Hello?", 6, '!' - '?');

    // Test 4: Empty strings
    test_memcmp("", "", 5, 0);

    // Test 5: Zero bytes to compare
    test_memcmp("ABC", "DEF", 0, 0);

    // Test 6: First string is shorter
    test_memcmp("Short", "Shorter", 10, '\0' - 'e');

    // Test 7: Second string is shorter
    test_memcmp("Longer", "Long", 10, 'e' - '\0');

    // Test 8: Null byte in the middle
    test_memcmp("Hello\0World", "Hello\0Everyone", 12, 'W' - 'E');

    // Test 9: Different strings (very first byte differs)
    test_memcmp("AHello", "BHello", 6, 'A' - 'B');

    printf("All tests completed.\n");
}

int main(void)
{
    run_memcmp_tests();
    return 0;
} */