/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Migalexa <Migalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:22:41 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 16:58:27 by Migalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' && str[i] > 'z')
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
    char str1[] = "hello"; // Contém apenas letras minúsculas
    char str2[] = "Hello"; // Contém letras maiúsculas

    // Chamando ft_str_is_lowercase para verificar str1
    if (ft_str_is_lowercase(str1))
        printf("str1 contém apenas letras minúsculas.\n");
    else
        printf("str1 não contém apenas letras minúsculas.\n");

    // Chamando ft_str_is_lowercase para verificar str2
    if (ft_str_is_lowercase(str2))
        printf("str2 contém apenas letras minúsculas.\n");
    else
        printf("str2 não contém apenas letras minúsculas.\n");

    return 0;
}*/