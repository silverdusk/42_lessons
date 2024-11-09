/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:15:42 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:21:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(check_alpha(str[a])))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "HelloWorld";
	char	str2[] = "12345";
	char	str3[] = "";

	printf("%s: %d\n", str1, ft_str_is_alpha(str1));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s: %d\n", str3, ft_str_is_alpha(str3));

	return 0;
}
