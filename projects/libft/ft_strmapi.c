/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:39:57 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:54:04 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Example function to uppercase characters
char to_uppercase(unsigned int i, char c)
{
    (void)i; // Unused parameter
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// Example function to repeat characters by their index
char repeat_by_index(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return (c + i % 26); // Wrap alphabet if needed
    return (c);
}

// Test function for ft_strmapi
void test_ft_strmapi(const char *test_name, const char *input,
                     char (*f)(unsigned int, char), const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Input string: \"%s\"\n", input ? input : "(null)");

    char *result = ft_strmapi(input, f);

    printf("Output string: \"%s\"\n", result ? result : "(null)");
    printf("Expected string: \"%s\"\n", expected ? expected : "(null)");

    if ((!result && !expected) || 
		(result && expected && strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");

    free(result);
}

// Run tests for ft_strmapi
void run_ft_strmapi_tests(void)
{
    printf("Running tests for ft_strmapi...\n");

    // Test 1: Convert to uppercase
    test_ft_strmapi("Convert to uppercase", "hello", to_uppercase, "HELLO");

    // Test 2: Repeat characters by index
    test_ft_strmapi("Repeat by index", "abcd", repeat_by_index, "aceg");

    // Test 3: Empty string
    test_ft_strmapi("Empty string", "", to_uppercase, "");

    // Test 4: Null input
    test_ft_strmapi("Null input", NULL, to_uppercase, NULL);

    // Test 5: No transformation needed
    test_ft_strmapi("No transformation", "1234", to_uppercase, "1234");

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_strmapi_tests();
    return (0);
} */