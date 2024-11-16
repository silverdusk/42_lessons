/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:07:36 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/16 16:00:07 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;

	newstr = (char *)malloc(ft_strlen(src) + 1);
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