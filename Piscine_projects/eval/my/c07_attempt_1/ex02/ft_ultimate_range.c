/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:06:05 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/08 12:15:52 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*newarr;
	long	index;

	newarr = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (newarr == NULL)
	{
		return (-1);
	}
	else
	{
		index = 0;
		while (index < max - min)
		{
			newarr[index] = min + index;
			index++;
			*range = newarr;
		}
		return (index);
	}
}

/*
#include <stdio.h>
int main() {
    int min, max;
    int *range = NULL;
    int size;
	int i;

    min = 5;
    max = 10;
    size = ft_ultimate_range(&range, min, max);
    printf("Min=%d,\nMax=%d,\nSize=%d\n", min, max, size);
    if (range != NULL)
	{
		i = 0;
		while (i < size)
		{
            printf("%d", range[i]);
			i++;
        }
        printf("\n");
        free(range);
    }
	else
	{
        printf("Array is NULL\n");
    }
	return 0;
}
*/