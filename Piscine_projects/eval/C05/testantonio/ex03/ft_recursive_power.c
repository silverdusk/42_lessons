/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:15:11 by antfreir          #+#    #+#             */
/*   Updated: 2024/02/15 18:59:34 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(5, 1));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(0, -5));
	printf("%d", ft_recursive_power(-1, -5));
}

