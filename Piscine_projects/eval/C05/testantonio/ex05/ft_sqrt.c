/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:01:40 by antfreir          #+#    #+#             */
/*   Updated: 2024/02/15 19:07:27 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

// int    main(void)
// {
// 	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
// 	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
// 	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
// 	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
// 	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
// 	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
// 	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
//         return (0);
// }
#include <limits.h>
#include <stdio.h>
#define MAX_SQR 2147395600

int main(void)
{
	printf("%d <- -16\n", ft_sqrt(-16));
	printf("%d <- zero\n", ft_sqrt(0));
	printf("%d <- 1\n", ft_sqrt(1));
	printf("%d <- 64\n", ft_sqrt(64));
	printf("%d <- 244140625\n", ft_sqrt(244140625));
	printf("%d <- 2147395600(max)\n", ft_sqrt(MAX_SQR));
	printf("%d <- max + 1\n", ft_sqrt(MAX_SQR + 1));
}
