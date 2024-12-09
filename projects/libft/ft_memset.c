/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:19 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:48:11 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* #include <stdio.h>
#include <string.h>

// Helper function to print memory contents
void print_memory(const void *mem, size_t n)
{
    const unsigned char *bytes = (const unsigned char *)mem;
    for (size_t i = 0; i < n; i++)
        printf("%02x ", bytes[i]);
    printf("\n");
}

// Helper function to test ft_memset
void test_memset(const char *test_name, void *b, int c, size_t len)
{
    printf("Test: %s\n", test_name);

    printf("Before memset:\n");
    print_memory(b, len);

    ft_memset(b, c, len);

    printf("After memset:\n");
    print_memory(b, len);

    // For comparison with the standard memset
    unsigned char *expected = malloc(len);
    memset(expected, c, len);

    printf("Expected:\n");
    print_memory(expected, len);

    if (memcmp(b, expected, len) == 0)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    free(expected);
    printf("\n");
}

// Test function
void run_memset_tests(void)
{
    printf("Running tests for ft_memset...\n");

    // Test 1: Basic test with small buffer
    char buffer1[10] = {0};
    test_memset("Basic test", buffer1, 'A', sizeof(buffer1));

    // Test 2: Set with null bytes
    char buffer2[10] = {0};
    test_memset("Set with null bytes", buffer2, 0, sizeof(buffer2));

    // Test 3: Partial buffer set
    char buffer3[10] = {0};
    test_memset("Partial buffer set", buffer3, 'B', 5);

    // Test 4: Zero-length operation
    char buffer4[10] = {0};
    test_memset("Zero-length operation", buffer4, 'C', 0);

    // Test 5: Large buffer set
    char buffer5[1024];
    memset(buffer5, 0, sizeof(buffer5));
    test_memset("Large buffer set", buffer5, 'Z', sizeof(buffer5));

    printf("All tests completed.\n");
}

int main(void)
{
    run_memset_tests();
    return 0;
} */