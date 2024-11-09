/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:02:51 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/04 16:22:55 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*#include <string.h>*/

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				c;
	unsigned int	size;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i])
	{
		size = (c + i);
		dest[c + i] = src[i];
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	dest[] = "ola andas ";
	char	src[] = "perdido?";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}*/