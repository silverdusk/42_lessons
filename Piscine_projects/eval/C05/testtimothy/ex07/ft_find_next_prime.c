/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:19:30 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:29:56 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Create a function that returns the next prime number
greater or equal to the number
given as argument.

2147483629 is the next prime below INT_MAX (which is prime)
So check from 2147483630

*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	else if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb += 1;
	return (nb);
}
 #include <stdio.h>
#include <limits.h>
#define NEXT 2147483629

int	main(void)
{
	printf("%d -> below INT_MAX\n", ft_find_next_prime(NEXT + 1));
	printf("%d -> INT_MAX\n", ft_find_next_prime(INT_MAX));
} 