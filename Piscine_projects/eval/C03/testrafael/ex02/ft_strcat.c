/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:21:20 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/07 11:03:46 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i])
	{
		dest[c + i] = src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "ola andas ";
// 	char	src[] = "perdido?";

// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
