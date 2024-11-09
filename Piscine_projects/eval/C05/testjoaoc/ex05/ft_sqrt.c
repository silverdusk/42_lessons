/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:59:56 by jsubtil-          #+#    #+#             */
/*   Updated: 2024/02/12 17:09:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (n > 46340)
		return (0);
	while (n * n < nb)
	{
		n++;
	}
	if (n * n == nb)
	{
		return (n);
	}
	else
		return (0);
}

//  #include <unistd.h>
// int	main(void)
// {
// 		int fodase;
// 		fodase = ft_sqrt(16) + 48;
// 		write (1, &fodase, 1);
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