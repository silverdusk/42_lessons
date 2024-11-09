/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:20:25 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/31 20:56:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char x[] = "1234";
	char y[] = "abcd";
	int z = 2;
	printf("Before: x = %s\n", x);
	printf("Before: y = %s\n",y);
	ft_strncpy(x,y,z);
	printf("After: x = %s\n", x);
	printf("After: y = %s\n",y);
}
*/