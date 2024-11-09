/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:50:53 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:25:26 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Create a recursive function that returns the value of
a power applied to a number.
A power lower than 0 returns 0.
Overflows must not be handled, the function return will be undefined.
We’ve decided that 0 power 0 will returns 1

*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
 #include <stdio.h>
#define NBR 5

int	main(void)
{
	int i;

	for (i = -2; i <= 10; i++)
		printf("%d^%d = %d\n", NBR, i, ft_recursive_power(NBR, i));

	return (0);
} 