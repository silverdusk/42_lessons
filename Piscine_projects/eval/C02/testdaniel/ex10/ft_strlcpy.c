/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:59:27 by dabaptis          #+#    #+#             */
/*   Updated: 2024/02/06 16:25:03 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	l;

	count = 0;
	l = ft_strlen(src);
	if (size != 0)
	{
		while (dest[count] != '\0' && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (l);
}

#include <stdio.h>
int	main(void)
{
	char src[] ="Insane string";
	char dest[] ="notveryimportantstring";
	printf("%d %s", ft_strlcpy(dest, src, 25), dest);
}
