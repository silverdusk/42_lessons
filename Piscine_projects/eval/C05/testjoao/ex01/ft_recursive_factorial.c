/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:55:59 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/07 18:56:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_recursive_factorial(10);
	printf("%d", i);
	return (i);
}
