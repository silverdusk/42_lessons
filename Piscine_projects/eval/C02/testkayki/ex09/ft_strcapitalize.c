/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:14:59 by karocha-          #+#    #+#             */
/*   Updated: 2024/02/01 20:43:32 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	a;

	c = 0;
	a = 1;
	str = ft_strlowcase(str);
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			if (a == 1)
				str[c] -= 32;
			a = 0;
		}
		else if (str[c] >= '0' && str[c] <= '9')
			a = 0;
		else
			a = 1;
		c++;
	}
	return (str);
}
// int	main()
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
// 	char str2[] = "ALPHABETICZ";
// 	printf("%s", ft_strcapitalize(str));
// 	printf("\n%s", ft_strcapitalize(str1));
// 	printf("\n%s", ft_strcapitalize(str2));
// }

#include <stdio.h>

int	main(void)
{
	char test0[] = "salut, comment tu vas ? 42mots quarante-deux;"
				   "cinquante+et+un";
	char test1[] = "Hello123";
    char test2[] = "123456";
    char test3[] = "!@#$%";
    char test4[] = "alphabeticz";
	char test5[] = "ALPHABETICZ";
	char test6[] = "";

	printf("%s: %s\n", test0, ft_strcapitalize(test0));
	printf("%s: %s\n", test1, ft_strcapitalize(test1));
    printf("%s: %s\n", test2, ft_strcapitalize(test2));
    printf("%s: %s\n", test3, ft_strcapitalize(test3));
    printf("%s: %s\n", test4, ft_strcapitalize(test4));
	printf("%s: %s\n", test5, ft_strcapitalize(test5));
	printf("%s: %s\n", test6, ft_strcapitalize(test6));
}
