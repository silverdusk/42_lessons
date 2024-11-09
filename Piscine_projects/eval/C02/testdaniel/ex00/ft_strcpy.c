/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:30:22 by dabaptis          #+#    #+#             */
/*   Updated: 2024/02/06 16:13:10 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (dest[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char src[] = "fire";
	char dest[] = "water";
	char src1[] = "air";
	char dest1[] = "earth";

	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", ft_strcpy(dest1, src1));
}
