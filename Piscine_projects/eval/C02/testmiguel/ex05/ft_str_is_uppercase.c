/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Migalexa <Migalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:38:57 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 17:00:50 by Migalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' && str[i] > 'Z')
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    char str1[] = "HELLO"; // Contém apenas letras maiúsculas
    char str2[] = "Hello"; // Contém letras minúsculas

    // Chamando ft_str_is_uppercase para verificar str1
    if (ft_str_is_uppercase(str1))
        printf("str1 contém apenas letras maiúsculas.\n");
    else
        printf("str1 não contém apenas letras maiúsculas.\n");

    // Chamando ft_str_is_uppercase para verificar str2
    if (ft_str_is_uppercase(str2))
        printf("str2 contém apenas letras maiúsculas.\n");
    else
        printf("str2 não contém apenas letras maiúsculas.\n");

    return 0;
}*/