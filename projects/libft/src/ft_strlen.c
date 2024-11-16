/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:02:07 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/16 16:00:58 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello world!";
	int length1 = ft_strlen(str1);
	char	str2[] = "";
	int length2 = ft_strlen(str2);
	char	str3[] = "\n";
	int length3 = ft_strlen(str3);

	printf("length of Hello world!: %d\n", length1);
	ft_strlen(str1);
	printf("length of empty string: %d\n", length2);
	ft_strlen(str2);
	printf("length of new line %d\n", length3);
	ft_strlen(str3);
}
*/