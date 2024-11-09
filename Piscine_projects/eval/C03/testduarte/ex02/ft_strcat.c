/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:59:47 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/07 19:25:25 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	dest_e;

	len = 0;
	dest_e = 0;
	while (dest[dest_e] != '\0')
		dest_e++;
	while (src[len] != '\0')
	{
		dest[dest_e] = src[len];
		len++;
		dest_e++;
	}
	dest[dest_e] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char	s2[13] = "hello";
	char	s3[100] = " world";

	puts("MY FAKE ft_strcat");
	printf("\"%s\" + \"%s\" =\n", s2, s3);
	printf("\"%s\"\n", ft_strcat(s2, s3));
}