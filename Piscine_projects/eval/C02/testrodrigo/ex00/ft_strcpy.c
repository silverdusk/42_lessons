/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:11:57 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:19:17 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char source[] = "Hello, world!";
	char destination[20];

	printf("Before copying: \n");
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	ft_strcpy(destination, source);

	printf("\nAfter copying: \n");
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
}
