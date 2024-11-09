/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:21:41 by tgomes-f          #+#    #+#             */
/*   Updated: 2024/02/11 17:44:43 by kmatskev         ###   ########.fr       */
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

// #include <stdio.h>
// int main(void) {
//     char src[] = "TTorres";
//     char dest[15];

//     printf("%s\n", ft_strncpy(dest, src, 15));
//     printf("%s\n", ft_strncpy(dest, src, 5));

//     return 0;
// }
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
