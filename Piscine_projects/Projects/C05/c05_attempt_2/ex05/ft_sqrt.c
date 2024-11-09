/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:40:08 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/12 17:09:51 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	while (index <= 46340 && (index <= nb / index))
	{
		if (index * index == nb)
		{
			return (index);
		}
		index++;
	}
	return (0);
}


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

