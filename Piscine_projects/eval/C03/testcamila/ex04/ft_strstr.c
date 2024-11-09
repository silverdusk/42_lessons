/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:16:08 by camrodri          #+#    #+#             */
/*   Updated: 2024/02/01 17:08:22 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

#include <stdio.h>
#include <stddef.h>
int	main()
{
   	char str1[] = "Hola mundo";
   	char to_find1[] = "o";

	char *result1 = ft_strstr(str1, to_find1);

	if (result1 != NULL) {
        	printf("%s\n", result1);
	}
	else {
        	printf("No encontrado\n");
	}
	return 0;
}
