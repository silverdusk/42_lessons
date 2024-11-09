/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:06:38 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:27:04 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Create a function that returns the square root of a number (if it exists),
	or 0 if the square root is an irrational number.
46340 is largest square root whose square lies within INT_MAX

*/

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n <= 46340 && (n <= nb / n))
	{
		if ((n * n) == nb)
			return (n);
		n++;
	}
	return (0);
}
 #include <limits.h>
#include <stdio.h>
#define MAX_SQR 2147395600

int	main(void)
{
	printf("%d <- -16\n", ft_sqrt(-16));
	printf("%d <- zero\n", ft_sqrt(0));
	printf("%d <- 1\n", ft_sqrt(1));
	printf("%d <- 64\n", ft_sqrt(64));
	printf("%d <- 244140625\n", ft_sqrt(244140625));
	printf("%d <- max\n", ft_sqrt(MAX_SQR));
} 