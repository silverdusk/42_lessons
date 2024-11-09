/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:07:28 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/01 17:51:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char test0[] = "123Hello";
	char test1[] = "Hello123";
	char test2[] = "123456";
	char test3[] = "!@#$%";
	char test4[] = "alphabeticz";
	char test5[] = "\n\t\r";
	char test6[] = "\0";

	printf("%s: %d\n", test0, ft_str_is_printable(test0));
	printf("%s: %d\n", test1, ft_str_is_printable(test1));
    printf("%s: %d\n", test2, ft_str_is_printable(test2));
    printf("%s: %d\n", test3, ft_str_is_printable(test3));
    printf("%s: %d\n", test4, ft_str_is_printable(test4));
	printf("%s: %d\n", test5, ft_str_is_printable(test5));
	printf("%s: %d\n", test6, ft_str_is_printable(test6));
}
*/