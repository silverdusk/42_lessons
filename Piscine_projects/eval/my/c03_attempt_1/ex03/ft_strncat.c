/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:40:17 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/03 17:55:44 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src_size < nb && src[src_size] != '\0')
	{
		dest[dest_size + src_size] = src[src_size];
		src_size++;
	}
	dest[dest_size + src_size] = '\0';
	return (dest);
}


#include <stdio.h>
#include <string.h>
int main (void)
{
	char dest1[] = "Hello";
	char src1[] = " world! Goodbye World!";
	int n = 7;
	printf("%s \n", ft_strncat(dest1, src1, n));
}
