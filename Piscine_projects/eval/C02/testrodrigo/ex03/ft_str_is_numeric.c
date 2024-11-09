/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:23:06 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:21:50 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			a++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "12345";
	char str2[] = "12A34";
	char str3[] = "";

	printf("%s: %d\n", str1, ft_str_is_numeric(str1));
	printf("%s: %d\n", str2, ft_str_is_numeric(str2));
	printf("%s: %d\n", str3, ft_str_is_numeric(str3));

	return 0;
}
