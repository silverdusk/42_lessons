/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:00:51 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 15:01:01 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}

/*
#include <stdio.h>
#define NBR 2

int	main(void)
{
	int i;

	for (i = -2; i <= 10; i++)
		printf("%d^%d = %d\n", NBR, i, ft_iterative_power(NBR, i));

	return (0);
}
*/