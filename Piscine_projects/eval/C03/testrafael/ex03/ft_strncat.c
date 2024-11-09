/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:08:54 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/07 15:07:06 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] && i < nb)
	{
		dest[c + i] = src[i];
		i++;
	}
	while (dest[c + i])
	{
		dest[c + i] = '\0';
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "ola andas ";
// 	char	src[] = "perdido?";
// 	int	nb = 5;

// 	ft_strncat(dest, src, nb);
// 	printf("%s\n", dest);
// 	return (0);
// }
