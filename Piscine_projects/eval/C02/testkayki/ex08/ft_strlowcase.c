/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:14:01 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/01 17:24:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
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

	printf("%s\n", ft_strlowcase(test0));
	printf("%s\n", ft_strlowcase(test1));
    printf("%s\n", ft_strlowcase(test2));
    printf("%s\n", ft_strlowcase(test3));
    printf("%s\n", ft_strlowcase(test4));
	printf("%s\n", ft_strlowcase(test5));
	printf("%s\n", ft_strlowcase(test6));
}