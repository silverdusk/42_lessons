/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:39:33 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/11 13:25:12 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;
	int	src_size;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	while (src[src_size] != '\0')
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
	char src1[] = " world!";
	printf("%s \n", ft_strcat(dest1, src1));
}
