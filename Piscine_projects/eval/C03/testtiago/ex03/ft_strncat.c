/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:46:51 by tiagosan          #+#    #+#             */
/*   Updated: 2024/02/01 18:31:28 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int main (){
	char src[] = " Cardoso";
	char dest[20] = "Tiago";
	char *ptr = ft_strncat(dest, src, 3);
	printf("%s", ptr);
}
