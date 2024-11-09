/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:56:25 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 18:17:25 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
			if ((str[i] < 'A' || str[i] > 'Z'))
				return (0);
		if ((str[i] < 'A' || str[i] > 'Z'))
			if ((str[i] < 'a' || str[i] > 'z'))
				return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
    char str1[] = "HelloWorld"; // Contém apenas caracteres alfabéticos
    char str2[] = "Hello, World!"; // Contém caracteres não alfabéticos

    // Chamando ft_str_is_alpha para verificar str1
    if (ft_str_is_alpha(str1))
        printf("str1 contém apenas caracteres alfabéticos.\n");
    else
        printf("str1 não contém apenas caracteres alfabéticos.\n");

    // Chamando ft_str_is_alpha para verificar str2
    if (ft_str_is_alpha(str2))
        printf("str2 contém apenas caracteres alfabéticos.\n");
    else
        printf("str2 não contém apenas caracteres alfabéticos.\n");

    return 0;
}
