/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:50:49 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/10 20:33:30 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	long	i;
	int		*range;

	if ((max - min) < 0)
		return (NULL);
	range = (int *) malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (max > min)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}


/* int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
} */

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
