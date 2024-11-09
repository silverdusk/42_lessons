/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raduarte <raduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:06:15 by raduarte          #+#    #+#             */
/*   Updated: 2024/02/07 10:58:04 by raduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char s1[] = "olaaigos";
// 	char s2[] = "ola aigos";

// 	ft_strcmp(s1, s2);
// 	printf("%i\n", ft_strcmp(s1, s2));
// 	printf("%i\n", strcmp(s1, s2));
// 	return (0);
// }