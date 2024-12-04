/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:37:57 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/18 22:22:47 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
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