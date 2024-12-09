/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:34:52 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:38:01 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (n == 0 || dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
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

// Helper function to test ft_memcpy
void test_memcpy(const char *test_name, void *dst, const void *src, size_t n)
{
    printf("Test: %s\n", test_name);

    printf("Before memcpy:\n");
    printf("  Destination: ");
    print_memory(dst, n);
    printf("  Source     : ");
    print_memory(src, n);

    ft_memcpy(dst, src, n);

    printf("After memcpy:\n");
    printf("  Destination: ");
    print_memory(dst, n);

    printf("Expected     : ");
    print_memory(src, n);

    if (memcmp(dst, src, n) == 0)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    printf("\n");
}

int main(void)
{
    printf("Running tests for ft_memcpy...\n");

    // Test 1: Basic test with small strings
    char src1[] = "Hello, World!";
    char dst1[20] = {0};
    test_memcpy("Basic test", dst1, src1, strlen(src1) + 1);

    // Test 2: Copy zero bytes
    char src2[] = "Hello, World!";
    char dst2[20] = {0};
    test_memcpy("Zero bytes", dst2, src2, 0);

    // Test 3: Source and destination are the same
    char buffer3[] = "Hello, World!";
    test_memcpy("Same src and dest", buffer3, buffer3, strlen(buffer3) + 1);

    // Test 4: Copy part of the string
    char src4[] = "Hello, World!";
    char dst4[20] = {0};
    test_memcpy("Partial copy", dst4, src4, 5);

    // Test 5: Overlapping memory (not safe for memcpy)
    char buffer5[] = "Hello, World!";
    test_memcpy("Overlapping memory", buffer5 + 2, buffer5, 5);

    // Test 6: Copy a large block of memory
    char src6[1024];
    char dst6[1024];
    for (int i = 0; i < 1024; i++)
        src6[i] = (char)(i % 256);
    test_memcpy("Large block copy", dst6, src6, 1024);

    printf("All tests completed.\n");
    return 0;
} */