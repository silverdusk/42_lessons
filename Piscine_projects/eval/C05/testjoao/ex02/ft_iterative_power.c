/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:06:39 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/07 18:57:14 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power-- > 1)
	{
		result *= nb;
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_iterative_power(2, 10);
	printf("%d", i);
	return (i);
}
