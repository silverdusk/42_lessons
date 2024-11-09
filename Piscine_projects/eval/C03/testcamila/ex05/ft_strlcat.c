/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:07:56 by camrodri          #+#    #+#             */
/*   Updated: 2024/02/01 17:09:08 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (i < size - j - 1 && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[j + i] = '\0';
	}
	return (j + i);
}

#include <stdio.h>
int     main()
{
        char    dest[] = "Hola ";
        char    src[] = "mundo.";
	unsigned int	size = 4;

        printf("%u\n", ft_strlcat(dest, src, size));
        printf("%s", dest);
	return 0;
}
