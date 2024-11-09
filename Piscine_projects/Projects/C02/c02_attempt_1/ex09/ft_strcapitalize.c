/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:59:26 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/02 09:26:30 by kmatskev         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] = str[i] - ('a' - 'A');
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char test0[] = "salut, comment tu vas ? 42mots quarante-deux;"
				   " cinquante+et+un";
	char test1[] = "Hello123";
    char test2[] = "123456";
    char test3[] = "!@#$%";
    char test4[] = "alphabeticz";
	char test5[] = "ALPHABETICZ";
	char test6[] = "";

	printf("%s\n", ft_strcapitalize(test0));
	printf("%s\n", ft_strcapitalize(test1));
    printf("%s\n", ft_strcapitalize(test2));
    printf("%s\n", ft_strcapitalize(test3));
    printf("%s\n", ft_strcapitalize(test4));
	printf("%s\n", ft_strcapitalize(test5));
	printf("%s\n", ft_strcapitalize(test6));
}
*/