/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:29:45 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 18:19:36 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	{
		while (str[i] != '0')
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char str[] = "hello, world!";

    printf("String original: %s\n", str);

    // Chamando ft_strupcase para converter para maiúsculas
    ft_strupcase(str);

    printf("String após a conversão para maiúsculas: %s\n", str);

    return 0;
}