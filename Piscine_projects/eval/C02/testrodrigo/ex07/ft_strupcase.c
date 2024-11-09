/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:45:07 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:26:48 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
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

	printf("%s: %s\n", str1, ft_strupcase(str1));
    printf("%s: %s\n", str2, ft_strupcase(str2));
    printf("%s: %s\n", str3, ft_strupcase(str3));

	return 0;
}