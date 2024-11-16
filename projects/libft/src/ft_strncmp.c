/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:02:53 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/16 16:01:10 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int
// main(int argc, char *argv[])
// {
//     int res;

//     if (argc < 3) {
//         fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     if (argc == 3)
//         res = strcmp(argv[1], argv[2]);
//     else
//         res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));

//     if (res == 0) {
//         printf("<str1> and <str2> are equal");
//         if (argc > 3)
//             printf(" in the first %d bytes\n", atoi(argv[3]));
//         printf("\n");
//     } else if (res < 0) {
//         printf("<str1> is less than <str2> (%d)\n", res);
//     } else {
//         printf("<str1> is greater than <str2> (%d)\n", res);
//     }

//     exit(EXIT_SUCCESS);
// }