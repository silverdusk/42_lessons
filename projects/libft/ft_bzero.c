/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 22:07:33 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:54:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* #include <stdio.h>

int main(void)
{
    char buffer[10] = "Hello 42!";

    printf("Before bzero: %s\n", buffer);
    ft_bzero(buffer, 10);
	// Output will appear empty because the array is all zeroes.
    printf("After bzero: %s\n", buffer);

    return 0;
} */