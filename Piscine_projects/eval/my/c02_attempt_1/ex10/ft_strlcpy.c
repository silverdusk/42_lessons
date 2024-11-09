/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:54:12 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/02 09:27:13 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size -1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*
#include <stdio.h>

int	main()
{
    char dest1[] = "abcdefghi";
    char src1[] = "";
	unsigned int size1 = 5;
    unsigned int result1 = ft_strlcpy(dest1, src1, size1);
    printf("Test1: result=%u, source=%s, dest=\"%s\"\n", result1, src1, dest1);

    char dest2[] = "abcdefghi";
    char src2[] = "12345";
	int size2 = 4;
    unsigned int result2 = ft_strlcpy(dest2, src2, size2);
    printf("Test2: result=%u, source=%s, dest=\"%s\"\n", result2, src2, dest2);

    char dest3[] = "";
    char src3[] = "Hello world!ABC1234567";
	int size3 = 13;
    unsigned int result3 = ft_strlcpy(dest3, src3, size3);
    printf("Test3: result=%u, source=%s, dest=\"%s\"\n", result3, src3, dest3);

}
*/