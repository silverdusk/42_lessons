/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:01:31 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 20:32:24 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*newarr;
	long	index;
	int		j;

	newarr = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	index = 0;
	j = 0;
	while (min + j < max)
	{
		newarr[index] = min + j;
		j++;
		index++;
	}
	return (newarr);
}


#include <stdio.h>
int main(void)
{
	// int min = -10000;
	// int max = 50000;
	int min = -2147483647;
	int max = 2147483647;


	printf("Range between %d and %d is ", min, max);
	int *result = ft_range(min, max);

	if (result != 0)
	{
		for (int i = 0; i <= max - min - 1; i++)
		{
			printf("%d ", result[i]);
		}
		free(result); // Don't forget to free the allocated memory
	}
	printf("\n");
	return 0;
}

