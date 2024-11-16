/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:37:57 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/16 16:00:40 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	index;

	s_len = 0;
	d_len = 0;
	index = 0;
	while (src[s_len] != '\0')
		s_len++;
	while (dest[d_len] != '\0')
		d_len++;
	if (size <= d_len)
	{
		return (s_len + d_len);
	}
	while (src[index] != '\0' && index < (size -1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[d_len + index] = '\0';
	return (s_len + d_len);
}

/*
#include <stdio.h>

int	main()
{
    char dst1[] = "abcdefghi";
    char src1[] = "";
	unsigned int size1 = 0;
	printf("T1 (Before): size=%d, src=%s, dest=\"%s\"\n", size1, src1, dst1);
    unsigned int res1 = ft_strlcat(dst1, src1, size1);
    printf("T1 (After): result=%u, src=%s, dest=\"%s\"\n", res1, src1, dst1);
	printf("\n");

    char dst2[] = "abcdefghi";
    char src2[] = "12345";
	int size2 = 4;
	printf("T2 (Before): size=%d, src=%s, dest=\"%s\"\n", size2, src2, dst2);
    unsigned int res2 = ft_strlcat(dst2, src2, size2);
    printf("T2 (After): result=%u, src=%s, dest=\"%s\"\n", res2, src2, dst2);
	printf("\n");

    char dst3[] = "";
    char src3[] = "Hello world!ABC1234567";
	int size3 = 13;
	printf("T3 (Before): size=%d, src=%s, dest=\"%s\"\n", size3, src3, dst3);
    unsigned int res3 = ft_strlcat(dst3, src3, size3);
    printf("T3 (After): result=%u, src=%s, dest=\"%s\"\n", res3, src3, dst3);
}
*/