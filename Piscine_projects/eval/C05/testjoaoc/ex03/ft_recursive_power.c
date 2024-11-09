/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:47:04 by jsubtil-          #+#    #+#             */
/*   Updated: 2024/02/12 17:06:22 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}

 #include <stdio.h>
int	main(void)
{
	int	result;
	int	nb;
	int	power;

	nb = -4;
	power = 5;
	result = ft_recursive_power(nb, power);
	printf("%d", result);
	return (0);
}
