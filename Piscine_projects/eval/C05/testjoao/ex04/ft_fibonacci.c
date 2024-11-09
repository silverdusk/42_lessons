/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:11:55 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/06 18:16:49 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
}
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_fibonacci(9);
	printf("%d", i);
	return (i);
}
