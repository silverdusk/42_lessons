/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:59:59 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:28:04 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "PROBlemo";
	char	str3[] = "HELLO";

	printf("%s: %s\n", str1, ft_strlowcase(str1));
    printf("%s: %s\n", str2, ft_strlowcase(str2));
    printf("%s: %s\n", str3, ft_strlowcase(str3));

	return 0;
}
