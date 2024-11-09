/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:56:26 by tgomes-f          #+#    #+#             */
/*   Updated: 2024/02/11 17:41:37 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void) {
//     char dest[] = "qwe";


//     size_t length = 3;
//     while (dest[length] != '\0') {
//         length++;
//     }
//     printf("%lu\n", length);

//     ft_strcpy(dest, "TestedoTomas");

//     printf("%s", dest);

//     return 0;
// }

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