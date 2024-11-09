/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:27:28 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:24:23 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Create an iterated function that returns the value of a power
applied to a number.
• A power lower than 0 returns 0.
• Overflows must not be handled.
• We’ve decided that 0 power 0 will returns 1
• Here’s how it should be prototyped :

*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

 #include <stdio.h>
#define NBR 5

int	main(void)
{
	int i;

	for (i = -2; i <= 10; i++)
		printf("%d^%d = %d\n", NBR, i, ft_iterative_power(NBR, i));

	return (0);
} 