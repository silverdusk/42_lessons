/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Migalexa <Migalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:04:23 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 17:02:14 by Migalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
	{
		if (str[i] < 32 && str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, world!"; // Contém apenas caracteres imprimíveis
    char str2[] = "Hello, \nworld!"; // Contém caracteres não imprimíveis

    // Chamando ft_str_is_printable para verificar str1
    if (ft_str_is_printable(str1))
        printf("str1 contém apenas caracteres imprimíveis.\n");
    else
        printf("str1 não contém apenas caracteres imprimíveis.\n");

    // Chamando ft_str_is_printable para verificar str2
    if (ft_str_is_printable(str2))
        printf("str2 contém apenas caracteres imprimíveis.\n");
    else
        printf("str2 não contém apenas caracteres imprimíveis.\n");

    return 0;
}*/