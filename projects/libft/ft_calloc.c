/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:59:28 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:07:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > INT_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));

    if (!arr)
    {
        printf("Test 1 Failed: Allocation returned NULL\n");
        return (1);
    }

    // Check if all elements are zero
    for (size_t i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            printf("Test 1 Failed: Element %zu is not zero\n", i);
            free(arr);
            return (1);
        }
    }

    printf("Test 1 Passed\n");
    free(arr);
    return (0);
} */