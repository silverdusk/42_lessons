/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:43:39 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:22:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (!(check_alpha(str[l])))
		{
			return (0);
		}
		l++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "helloworld";
	char	str2[] = "HELLOworld";
	char	str3[] = "";

	printf("%s: %d\n", str1, ft_str_is_alpha(str1));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s: %d\n", str3, ft_str_is_alpha(str3));

	return 0;
}
