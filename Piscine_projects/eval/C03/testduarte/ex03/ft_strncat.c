/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:14:03 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/07 19:27:01 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	dest_e;

	len = 0;
	dest_e = 0;
	while (dest[dest_e] != '\0')
		dest_e++;
	while (len < nb && src[len] != '\0')
	{
		dest[dest_e] = src[len];
		len++;
		dest_e++;
	}
	dest[dest_e] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char destination[50] = "Hello, ";
    char source[] = "World!";

    unsigned int n = 4; // Adjust the value of n as needed

    printf("Before strncat:\n");
    printf("Destination: %s\n", destination);
    printf("Source: %s\n", source);

    ft_strncat(destination, source, n);

    printf("\nAfter strncat:\n");
    printf("Destination: %s\n", destination);

    return 0;
}