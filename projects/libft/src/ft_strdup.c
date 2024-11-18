/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:07:36 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/18 20:06:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src)
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

char	*ft_strdup(const char *src)
{
	char	*newstr;

	newstr = (char *)malloc(ft_strlen(src) + 1);
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, src);
	return (newstr);
}

/*
#include <stdio.h>
int main (void)
{
	char teststr[] = "Hello world!";

	char *newstring = ft_strdup(teststr);

	if (newstring != NULL) {
        // Print the duplicated string
        printf("Original: %s\nDuplicated: %s\n", teststr, newstring);

        // Free the memory allocated by strdup
        free(newstring);
    } else {
        printf("Memory allocation failed.\n");
    }
	return (0);
}
*/