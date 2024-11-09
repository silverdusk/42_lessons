/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:03:16 by psimoes           #+#    #+#             */
/*   Updated: 2024/02/13 20:40:28 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(void)
{
	int	i;
	int	*range;

	range = ft_range(-2, 7);
	i = -1;
	while (++i < 9)
	{
		printf("%d ", range[i]);
	}
	return(0);
}

