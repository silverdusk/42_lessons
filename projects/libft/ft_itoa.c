/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:01:29 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:02:21 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = ft_num_len(nbr);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_itoa(int num, const char *expected)
{
    char *result = ft_itoa(num);

    if (result == NULL)
    {
        printf("Test failed for input %d: result is NULL\n", num);
        return;
    }

    if (strcmp(result, expected) == 0)
    {
        printf("Test passed for input %d: output = '%s'\n", num, result);
    }
    else
    {
        printf("Test failed for input %d: ", num);
		printf("Expected = '%s', got = '%s'\n", expected, result);
    }

    free(result);
}

int main(void)
{
    // Basic test cases
	printf("Basic tests:\n");
    test_itoa(0, "0");
    test_itoa(42, "42");
    test_itoa(-42, "-42");

    // Edge cases
	printf("Edge cases:\n");
    test_itoa(2147483647, "2147483647");    // Maximum int
    test_itoa(-2147483648, "-2147483648"); // Minimum int

    // Small negative numbers
	printf("Negative numbers:\n");
    test_itoa(-1, "-1");
    test_itoa(-9, "-9");

    // Large positive numbers
	printf("Large positive numbers:\n");
    test_itoa(1000000, "1000000");
    test_itoa(987654321, "987654321");

    // Large negative numbers
	printf("Large negative numbers:\n");
    test_itoa(-1000000, "-1000000");
    test_itoa(-987654321, "-987654321");

    return 0;
} */