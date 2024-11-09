/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:20:34 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:19:00 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

If the argument is not valid the function should return 0.
Overflows must not be handled, the function return will be undefined.

0!==1 (1!==1, 2!==2, 3!==6, 4!==24)
->divide by 4, 3, 2, 1, hence 0!==1
n^0==1 (n^2==2, n^1==1, n^0==1, n^-1==0.5, n^-2==0.25)

Iterative involves a loop repeating instructions until conditions are met.
Recursive involves calling itself.

*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

 #include <stdio.h>

int	main(void)
{
	int i;

	for (i = -2; i <= 15; i++)
		printf("%d -> %d\n", i, ft_iterative_factorial(i));
} 