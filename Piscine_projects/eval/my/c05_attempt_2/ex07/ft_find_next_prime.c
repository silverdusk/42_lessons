/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:02:49 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 17:20:45 by kmatskev         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	if (nb == 2)
	{
		return (nb);
	}
	if (nb % 2 == 0)
	{
		nb++;
	}
	while (ft_is_prime(nb) == 0)
	{
		nb = nb + 2;
	}
	return (nb);
}


#include <stdio.h>
#include <limits.h>
#define NEXT 2147483629
#define NUM 8

int	main(void)
{
	printf("%d -> below INT32_MAX\n", ft_find_next_prime(NEXT + 1));
	printf("%d -> INT32_MAX\n", ft_find_next_prime(__INT32_MAX__));
	printf("%d\n", ft_find_next_prime(NUM));
}
