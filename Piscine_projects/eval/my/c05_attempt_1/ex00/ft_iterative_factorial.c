/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:12:17 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/10 15:12:02 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (r < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0 && nb <= 2147483647)
	{
		r = nb * r;
		nb--;
	}
	return (r);
}


#include <stdio.h>
int	main(void)
{
	int i;

	for (i = -2; i <= 15; i++)
		printf("%d -> %d\n", i, ft_iterative_factorial(i));
}
