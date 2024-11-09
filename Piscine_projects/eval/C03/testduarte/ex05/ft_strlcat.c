/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:35:37 by dde-carv          #+#    #+#             */
/*   Updated: 2024/02/11 12:57:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	res;

	lend = 0;
	lens = 0;
	res = 0;
	while (dest[lend] != '\0')
		lend++;
	while (src[res] != '\0')
		res++;
	if (size <= lend)
		res += size;
	else
		res += lend;
	while (src[lens] != '\0' && (lend + 1) < size)
	{
		dest[lend] = src[lens];
		lend++;
		lens++;
	}
	dest[lend] = '\0';
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
//     char destination[50] = "Hello, ";
//     char source[] = "World!";

//     unsigned int size = 5; // Adjust the value of size as needed

//     printf("Before strlcat:\n");
//     printf("Destination: %s\n", destination);
//     printf("Source: %s\n", source);

//     unsigned int result = ft_strlcat(destination, source, size);

//     printf("\nAfter strlcat:\n");
//     printf("Destination: %s\n", destination);
//     printf("Total characters concatenated: %u\n", result);

//     return 0;
// }

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