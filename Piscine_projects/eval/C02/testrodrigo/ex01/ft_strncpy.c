/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:35:40 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:20:12 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
       	char source[] = "Hello, world!";
	char destination[20];

	unsigned int n = 5;  // I can ajust this to test different lengths

	printf("Before copy: \n");
	printf("Source: %s\n", source);
	printf("Destin: %s\n", destination);

	ft_strncpy(destination, source, n);

	printf("After copy: %u\n", n);
	printf("Source: %s\n", source);
	printf("Destin: %s\n", destination);

	return 0;
}
