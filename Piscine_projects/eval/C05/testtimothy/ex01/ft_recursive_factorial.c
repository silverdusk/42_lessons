/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:38:59 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:23:42 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

If the argument is not valid the function should return 0.
Overflows must not be handled, the function return will be undefined.
recursion, the function calls itself

*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

 #include <stdio.h>

int	main(void)
{
	int i;

	for (i = -2; i <= 15; i++)
		printf("%d -> %d\n", i, ft_recursive_factorial(i));
} 