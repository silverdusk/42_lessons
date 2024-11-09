/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:10:27 by lhonorio          #+#    #+#             */
/*   Updated: 2024/02/10 19:06:27 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	calc;
	int	c;

	c = 0;
	calc = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (c < power)
	{
		calc *= nb;
		c++;
	}
	return (calc);
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
	return (0);
}
