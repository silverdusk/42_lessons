/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:00:59 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 18:16:21 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20]; // Deve ser grande o suficiente para acomodar a string copiada

    // Chamando ft_strncpy para copiar src para dest
    ft_strncpy(dest, src, 5); // Copiar apenas os primeiros 5 caracteres

    // Exibindo a string copiada
    printf("A string copiada é: %s\n", dest);

    return 0;
}