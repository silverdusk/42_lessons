/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollimpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:38:28 by aollimpi          #+#    #+#             */
/*   Updated: 2024/02/13 17:47:42 by aollimpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i]->str = av[i];
		array[i]->size = ft_strlen(av[i]);
		array[i]->copy = ft_strdup(av[i]);
		i++;
	}
	array[i]->str = 0;
	array[i]->copy = 0;
	return (array);
}
/*#include <stdio.h>
int	main(int argc, char** argv)
{
	int	i;
	struct s_stock_str* structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : %s @ %p\n", structs[i].str, structs[i].str);
		printf("\t|   copied : %s @ %p\n", structs[i].copy, structs[i].copy);
		printf("\t|     size : %d\n", structs[i].size);
		index++;
	}
}*/
