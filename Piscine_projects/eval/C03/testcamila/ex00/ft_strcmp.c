/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:11:32 by camrodri          #+#    #+#             */
/*   Updated: 2024/02/01 16:53:06 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char	str1[] = "Hola mundo";
	char	str2[] = "";

	char	str3[] = "Hola mundooo";
        char	str4[] = "Hola mundo";

	char    str5[] = "Hola mundo";
        char    str6[] = "Hola mundo";

	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	printf("%d", ft_strcmp(str5, str6));

	return 0;
}
