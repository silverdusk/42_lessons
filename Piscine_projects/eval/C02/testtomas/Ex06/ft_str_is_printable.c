/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:38:20 by tgomes-f          #+#    #+#             */
/*   Updated: 2024/02/11 17:54:06 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
//os caracteres printable sao letrasnumerospontuacaoespaco,
//os que vao desde o char32ate126
//tabs e /n nao sao

// #include <stdio.h>
// int	main(void)
// {
// 	int isprint;
// 	char a[] = "	";//tab
// 	isprint = ft_str_is_printable(a);
// 	printf("%d/n", isprint);
// }

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