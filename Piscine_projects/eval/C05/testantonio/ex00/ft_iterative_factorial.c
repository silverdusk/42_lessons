/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:52:31 by antfreir          #+#    #+#             */
/*   Updated: 2024/02/15 18:56:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}

#include <stdlib.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(__INT32_MIN__));
}
