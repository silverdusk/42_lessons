/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:36:21 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/02/11 18:10:07 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb < 2)
		return (0);
	while (count < nb / 2)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

#include <stdio.h>
int main (void)
{
	printf("%d balls %d\n", 1000000, ft_is_prime(1000000));
	printf("%d balls %d\n", 4, ft_is_prime(4));
	printf("%d balls %d\n", 0, ft_is_prime(2));
}