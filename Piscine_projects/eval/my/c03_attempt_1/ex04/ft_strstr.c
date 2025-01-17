/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:24:26 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/03 18:54:31 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compare(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
		{
			return (0);
		}
		a++;
		b++;
	}
	return (*b == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && (compare(str, to_find)))
		{
			return (str);
		}
		str++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,";
    char *to_find = "ips";

    printf("%s\n", ft_strstr(str, to_find));
	// printf("%s\n", strstr(str, to_find));

    return 0;
}
