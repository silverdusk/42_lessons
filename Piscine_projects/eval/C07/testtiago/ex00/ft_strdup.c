/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:43:40 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/10 19:52:34 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}


int	main(int argc, char *argv[])
{
	char	*ft;
	char	*str;

	if (argc != 2)
		return (1);
	ft = ft_strdup(argv[argc - 1]);
	str = strdup(argv[argc - 1]);
	printf("Mine: %s.\nOriginal: %s.\n", ft, str);
}
