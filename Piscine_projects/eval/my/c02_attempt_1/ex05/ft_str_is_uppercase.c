/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:47:10 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/02 09:46:43 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > '@' && str[i] < '[')))
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
	char test5[] = "ALPHABETICZ";
	char test6[] = "";

	printf("%s: %d\n", test0, ft_str_is_uppercase(test0));
	printf("%s: %d\n", test1, ft_str_is_uppercase(test1));
    printf("%s: %d\n", test2, ft_str_is_uppercase(test2));
    printf("%s: %d\n", test3, ft_str_is_uppercase(test3));
    printf("%s: %d\n", test4, ft_str_is_uppercase(test4));
	printf("%s: %d\n", test5, ft_str_is_uppercase(test5));
	printf("%s: %d\n", test6, ft_str_is_uppercase(test6));
}
*/