/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:36:48 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 15:10:37 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to test ft_strtrim
void test_ft_strtrim(const char *test_name, const char *s1, const char *set,
                     const char *expected)
{
    printf("Test: %s\n", test_name);
    printf("Input string: \"%s\"\n", s1 ? s1 : "(null)");
    printf("Trim set: \"%s\"\n", set ? set : "(null)");

    char *result = ft_strtrim(s1, set);

    printf("Output: \"%s\"\n", result ? result : "(null)");
    printf("Expected: \"%s\"\n", expected ? expected : "(null)");

    if ((result == NULL && expected == NULL) || 
        (result && expected && strcmp(result, expected) == 0))
        printf("Result: PASS\n\n");
    else
        printf("Result: FAIL\n\n");

    free(result);
}

// Run tests for ft_strtrim
void run_ft_strtrim_tests(void)
{
    printf("Running tests for ft_strtrim...\n");

    test_ft_strtrim("Basic trim", "   Hello, World!   ", " ",
                    "Hello, World!");
    test_ft_strtrim("No trim needed", "Hello, World!", " ", "Hello, World!");
    test_ft_strtrim("Trim all", "   ", " ", "");
    test_ft_strtrim("Empty string", "", " ", "");
    test_ft_strtrim("Empty set", "Hello, World!", "", "Hello, World!");
    test_ft_strtrim("Null input string", NULL, " ", NULL);
    test_ft_strtrim("Null trim set", "Hello, World!", NULL, NULL);
    test_ft_strtrim("Special characters", "\tHello\n", "\t\n", "Hello");
    test_ft_strtrim("Trim subset", "xyxHello, World!yx", "xy", 
                    "Hello, World!");
    test_ft_strtrim("No match in set", "Hello, World!", "abc", 
                    "Hello, World!");

    printf("All tests completed.\n");
}

int main(void)
{
    run_ft_strtrim_tests();
    return (0);
} */