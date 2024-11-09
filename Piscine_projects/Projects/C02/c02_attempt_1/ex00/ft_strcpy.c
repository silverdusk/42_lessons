/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:38:02 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/01 17:35:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char x[] = "1234";
	char y[] = "abcd";
	printf("Before: x = %s\n", x);
	printf("Before: y = %s\n",y);
	ft_strcpy(x,y);
	printf("After: x = %s\n", x);
	printf("After: y = %s\n",y);
}
*/