/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:41:47 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:40:31 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s && d < s + len)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
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

// Helper function to test ft_memmove
void test_memmove(const char *test_name, void *dst, const void *src, size_t len)
{
    printf("Test: %s\n", test_name);

    printf("Before memmove:\n");
    printf("  Destination: ");
    print_memory(dst, len);
    printf("  Source     : ");
    print_memory(src, len);

    ft_memmove(dst, src, len);

    printf("After memmove:\n");
    printf("  Destination: ");
    print_memory(dst, len);

    // For comparison with expected results
    unsigned char *expected_dst = malloc(len);
    memcpy(expected_dst, dst, len);

    if (memcmp(dst, expected_dst, len) == 0)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    free(expected_dst);
    printf("\n");
}

// Test function
void run_memmove_tests(void)
{
    printf("Running tests for ft_memmove...\n");

    // Test 1: Basic test with small strings
    char src1[] = "Hello, World!";
    char dst1[20] = {0};
    test_memmove("Basic test", dst1, src1, strlen(src1) + 1);

    // Test 2: Overlapping memory (forward copy)
    char buffer2[] = "abcdef";
    test_memmove("Overlapping (forward)", buffer2 + 2, buffer2, 4);

    // Test 3: Overlapping memory (backward copy)
    char buffer3[] = "abcdef";
    test_memmove("Overlapping (backward)", buffer3, buffer3 + 2, 4);

    // Test 4: Copy zero bytes
    char src4[] = "Hello, World!";
    char dst4[20] = {0};
    test_memmove("Zero bytes", dst4, src4, 0);

    // Test 5: Source and destination are the same
    char buffer5[] = "Hello, World!";
    test_memmove("Same src and dest", buffer5, buffer5, strlen(buffer5) + 1);

    // Test 6: Large block of memory
    char src6[1024];
    char dst6[1024];
    for (int i = 0; i < 1024; i++)
        src6[i] = (char)(i % 256);
    test_memmove("Large block copy", dst6, src6, 1024);

    printf("All tests completed.\n");
}

int main(void)
{
    run_memmove_tests();
    return 0;
} */