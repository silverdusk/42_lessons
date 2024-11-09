/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:52:10 by tiagosan          #+#    #+#             */
/*   Updated: 2024/02/01 18:37:25 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int main()
{
	char str1[] = "mkl";
	char str2[] = "mkl";
	char str3[] = "nj";
	char str4[] = "ammmm";
	int n = ft_strcmp(str1, str2);
	printf("%d", n);
	n = ft_strcmp(str1, str3);
	printf("%d", n);
        n = ft_strcmp(str1, str4);
	printf("%d", n);
}
