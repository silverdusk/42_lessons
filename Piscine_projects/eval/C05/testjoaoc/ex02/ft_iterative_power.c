/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:59:39 by jsubtil-          #+#    #+#             */
/*   Updated: 2024/02/12 17:05:34 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

 #include <stdio.h>
int	main(void)
{
	int	result;
	int	nb;
	int	power;

	nb = 4;
	power = 5;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return (0);
}