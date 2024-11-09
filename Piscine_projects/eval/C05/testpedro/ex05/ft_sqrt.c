/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:20:42 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/02/11 18:07:56 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	count;
	long	x;

	x = nb;
	if (x <= 0)
		return (0);
	if (x == 1)
		return (1);
	count = 2;
	if (x >= 2)
	{
		while (count * count <= x)
		{
			if (count * count == x)
				return (count);
			count++;
		}
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(-2282));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(1640045925));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483646));
	printf("%d\n", ft_sqrt(20286016));
	printf("%d\n", ft_sqrt(1120795600));
	printf("%d\n", ft_sqrt(484440100));
}