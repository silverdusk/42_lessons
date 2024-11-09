/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:05:41 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/07 19:29:16 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	len;

	len = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			len = 0;
			while (to_find[len] && str[len] == to_find[len])
				len++;
			if (!to_find[len])
				return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
int main() {
    // Example usage of ft_strstr
    char str[] = "Hello, world!How you doin?";
    char to_find[] = "8";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("'%s' found in '%s' at position: %ld\n", to_find, str, result - str);
        printf("Substring after '%s' is: %s\n", to_find, result + sizeof(to_find) - 1);
    } else {
        printf("'%s' not found in '%s'\n", to_find, str);
    }

    return 0;
}
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,";
    char *to_find = "8";

    printf("%s\n", ft_strstr(str, to_find));
	// printf("%s\n", strstr(str, to_find));

    return 0;
}
