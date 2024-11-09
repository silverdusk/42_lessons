/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:30:42 by tiagosan          #+#    #+#             */
/*   Updated: 2024/02/01 18:34:43 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = "mkl";
	char str2[] = "mkl";
	char str3[] = "ab";
	char str4[] = "ammmm";
	char str5[] = "mkndnd";
	int n = ft_strncmp(str1, str2, 3);
	printf("%d", n);
	n = ft_strncmp(str1, str3, 2);
	printf("%d", n);
        n = ft_strncmp(str1, str4, 3);
	printf("%d", n);
	n = ft_strncmp(str1, str5, 2);
	printf("%d", n);
}
