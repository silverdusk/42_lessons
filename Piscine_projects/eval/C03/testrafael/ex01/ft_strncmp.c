/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:22:43 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/07 11:09:53 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i <= n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char s1[] = "ola aigpaos";
// 	char s2[] = "ola aigos";
// 	unsigned int	n;

// 	n = 4;
// 	ft_strncmp(s1, s2, n);
// 	printf("%i\n", ft_strncmp(s1, s2, n));
// 	printf("%i\n", strncmp(s1, s2, n));
// 	return (0);
// }