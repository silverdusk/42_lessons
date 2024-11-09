/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:01:55 by jcasanov          #+#    #+#             */
/*   Updated: 2024/01/29 16:21:30 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		++i;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (w == 1)
				str[i] -= 32;
			w = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			w = 0;
		}
		else
			w = 1;
		++i;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
