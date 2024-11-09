/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:12:43 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 15:03:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
}

/*
#include <stdio.h>
#define NUM 2

int	main(void)
{
	int i;

	for (i = -2; i <= 10; i++)
		printf("%d^%d = %d\n", NUM, i, ft_recursive_power(NUM, i));

	return (0);
}
*/