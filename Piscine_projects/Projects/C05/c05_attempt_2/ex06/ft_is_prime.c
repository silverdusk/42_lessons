/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:00:50 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 15:05:59 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 3;
	if (nb == 2)
	{
		return (1);
	}
	else if (nb % 2 == 0 || nb < 2)
	{
		return (0);
	}
	while (index <= (nb / index))
	{
		if (nb % index == 0)
		{
			return (0);
		}
		index = index + 2;
	}
	return (1);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int i;

	for (i = -5; i < 1000; i++)
		printf("%d -> %d\n", ft_is_prime(i), i);
	for (i = INT_MAX - 20; i < INT_MAX; i++)
		printf("%d -> %d\n", ft_is_prime(i), i);
	printf("%d -> INT_MAX\n", ft_is_prime(INT_MAX));
	printf("%d\n", ft_is_prime(841));
}
*/