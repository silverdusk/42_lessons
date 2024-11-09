/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:34:26 by psimoes           #+#    #+#             */
/*   Updated: 2024/02/13 20:42:26 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	size;

	size = max - min;
	if (min >= max)
	{
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}

int	main(void)
{
	int	i;
	int	*range = NULL;

	printf("%d\n", ft_ultimate_range(&range, -2, 7));
	i = -1;
	while (++i < 9)
	{
		printf("%d ", range[i]);
	}
	return(0);
}

