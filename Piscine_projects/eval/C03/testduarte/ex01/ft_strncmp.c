/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:55:25 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/07 19:24:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hella";

    unsigned int n = 5; // Adjust the value of n as needed

    int result = ft_strncmp(str1, str2, n);

    if (result == 0)
        printf("The strings are equal up to %u characters.\n", n);
    else if (result < 0)
        printf("String 1 is less than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
} 