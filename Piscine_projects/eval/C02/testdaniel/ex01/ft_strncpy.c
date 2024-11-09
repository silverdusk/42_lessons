/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:44:11 by dabaptis          #+#    #+#             */
/*   Updated: 2024/02/06 16:15:17 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	src[] = "aaaaaaaaa";
	char	dest[] = "123456789";
	char	dest2[] = "abcdefghi";

	printf ("%s", ft_strncpy(dest,  src, 4));
	printf ("\n%s", ft_strncpy(dest2, src, 4));
}
