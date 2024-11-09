/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:52:40 by camrodri          #+#    #+#             */
/*   Updated: 2024/02/01 16:55:13 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int     main()
{
        char    str1[] = "Hola";
        char    str2[] = "Hola mundo";
	int	n = 7;
	int	x = 3;

        printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", ft_strncmp(str2, str1, n));
	printf("%d\n", ft_strncmp(str2, str1, x));

        return 0;
}
