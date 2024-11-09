/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:30:40 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/07 16:01:33 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	counter(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	b;
	int	to_find_lenght;

	c = 0;
	b = 0;
	to_find_lenght = counter(to_find);
	if (str == NULL)
		return (NULL);
	while (str[c])
	{
		while (str[c] == to_find[b])
		{
			b++;
			c++;
			if (b == to_find_lenght)
				return (&str[c - to_find_lenght]);
		}
		c++;
		b = 0;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "dasijhdiuqhdqiuola";
// 	char	to_find[] = "";
// 	char	*result;

// 	result = ft_strstr(str, to_find);
// 	if (result != NULL)
// 		printf("%s\n", to_find);
// 	else
// 		printf("Substring doesnt exist \n");
// }
