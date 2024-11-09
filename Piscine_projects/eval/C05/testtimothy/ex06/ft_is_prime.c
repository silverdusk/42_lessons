/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:47:16 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:28:48 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Create a function that returns 1 if the number given as a parameter is a prime
number, and 0 if it isn’t.

If nb % n = 0 (where n < nb and n > 1)

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
 #include <limits.h>
#include <stdio.h>

int	main(void)
{
	int i;

	for (i = -5; i < 1000; i++)
		printf("%d -> %d\n", ft_is_prime(i), i);
	for (i = INT_MAX - 25; i < INT_MAX; i++)
		printf("%d -> %d\n", ft_is_prime(i), i);
	printf("%d -> INT_MAX\n", ft_is_prime(INT_MAX));
	printf("%d\n", ft_is_prime(841));
} 