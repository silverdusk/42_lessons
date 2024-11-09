/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:40:58 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/07 19:22:49 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "HeLlo";

    int result = ft_strcmp(str1, str2);
    printf("Comparison result: %d\n", result);

    return 0;
}