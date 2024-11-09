/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:18:19 by tiagosan          #+#    #+#             */
/*   Updated: 2024/02/01 18:33:20 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

int main (){
	char src[] = " Cardoso";
	char dest[20] = "";
	char *ptr = ft_strcat(dest, src);
	printf("%s", ptr);
}
