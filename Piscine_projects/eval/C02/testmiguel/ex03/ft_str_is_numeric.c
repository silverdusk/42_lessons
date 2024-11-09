/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Migalexa <Migalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:55:58 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 16:58:31 by Migalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' && str[i] > '9')
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
    char str1[] = "12345"; // Contém apenas caracteres numéricos
    char str2[] = "123A45"; // Contém caracteres não numéricos

    // Chamando ft_str_is_numeric para verificar str1
    if (ft_str_is_numeric(str1))
        printf("str1 contém apenas caracteres numéricos.\n");
    else
        printf("str1 não contém apenas caracteres numéricos.\n");

    // Chamando ft_str_is_numeric para verificar str2
    if (ft_str_is_numeric(str2))
        printf("str2 contém apenas caracteres numéricos.\n");
    else
        printf("str2 não contém apenas caracteres numéricos.\n");

    return 0;
}*/
