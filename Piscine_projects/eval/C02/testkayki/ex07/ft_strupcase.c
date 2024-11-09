/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:11:01 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/01 17:24:06 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

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

	printf("%s: %s\n", test0, ft_strupcase(test0));
	printf("%s: %s\n", test1, ft_strupcase(test1));
    printf("%s: %s\n", test2, ft_strupcase(test2));
    printf("%s: %s\n", test3, ft_strupcase(test3));
    printf("%s: %s\n", test4, ft_strupcase(test4));
	printf("%s: %s\n", test5, ft_strupcase(test5));
	printf("%s: %s\n", test6, ft_strupcase(test6));
}