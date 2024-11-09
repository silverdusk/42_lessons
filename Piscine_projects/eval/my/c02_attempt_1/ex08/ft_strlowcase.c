/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:44:59 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/31 20:58:11 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > '@' && str[i] < '['))
		{
			str[i] = str[i] + ' ';
		}
		i++;
	}
	return (str);
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

	printf("%s\n", ft_strlowcase(test0));
	printf("%s\n", ft_strlowcase(test1));
    printf("%s\n", ft_strlowcase(test2));
    printf("%s\n", ft_strlowcase(test3));
    printf("%s\n", ft_strlowcase(test4));
	printf("%s\n", ft_strlowcase(test5));
	printf("%s\n", ft_strlowcase(test6));
}
*/