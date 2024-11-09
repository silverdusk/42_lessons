/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:48:12 by dabaptis          #+#    #+#             */
/*   Updated: 2024/02/06 16:22:07 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	i;
	int	cool;

	i = 0;
	cool = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cool == 1)
				str[i] -= 32;
			cool = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			cool = 0;
		else
			cool = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "4 &&&&&pedr^&*o PP-pe 78755toto";
	printf("%s",ft_strcapitalize(str));
}
