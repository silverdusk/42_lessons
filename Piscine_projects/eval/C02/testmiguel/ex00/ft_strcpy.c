/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:02:33 by Migalexa          #+#    #+#             */
/*   Updated: 2024/02/12 18:20:51 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	nb;

	nb = 0;
	while (src[nb] != '\0')
	{
		dest[nb] = src[nb];
		nb++;
	}
	dest[nb] = '\0';
	return (dest);
}

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