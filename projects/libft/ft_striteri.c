/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:53:28 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:32:40 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>
#include <ctype.h>

// Example function to modify characters to uppercase
void to_uppercase(unsigned int index, char *ch)
{
    if (ch)
        *ch = toupper(*ch);
}

// Example function to increment ASCII values
void increment_ascii(unsigned int index, char *ch)
{
    if (ch)
        *ch += index;
}

// Example function to print characters and their indices
void print_with_index(unsigned int index, char *ch)
{
    if (ch)
        printf("Index %u: %c\n", index, *ch);
}

// Test function for ft_striteri
void test_ft_striteri(const char *test_name, char *s,
					void (*f)(unsigned int, char*), const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Original string: \"%s\"\n", s ? s : "(null)");

    if (s)
        ft_striteri(s, f);

    printf("Modified string: \"%s\"\n", s ? s : "(null)");
    printf("Expected string: \"%s\"\n", expected);

    if (!s || strcmp(s, expected) == 0)
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");
}

// Run tests for ft_striteri
void run_ft_striteri_tests(void)
{
    printf("Running tests for ft_striteri...\n");

    // Test 1: Convert string to uppercase
    char str1[] = "hello";
    test_ft_striteri("Convert to uppercase", str1, to_uppercase, "HELLO");

    // Test 2: Increment ASCII values based on index
    char str2[] = "abcd";
    test_ft_striteri("Increment ASCII values", str2, increment_ascii, "aceg");

    // Test 3: Print characters with their indices (no modification)
    char str3[] = "test";
    printf("Test: Print characters with indices\n");
    ft_striteri(str3, print_with_index);
    printf("\n");

    // Test 4: Empty string
    char str4[] = "";
    test_ft_striteri("Empty string", str4, to_uppercase, "");

    // Test 5: NULL string
    test_ft_striteri("NULL string", NULL, to_uppercase, NULL);

    // Test 6: NULL function pointer
    char str5[] = "unchanged";
    test_ft_striteri("NULL function pointer", str5, NULL, "unchanged");

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_striteri_tests();
    return 0;
} */