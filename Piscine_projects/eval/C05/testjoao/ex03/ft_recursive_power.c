/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:09:02 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/06 18:16:31 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb *= ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_recursive_power(2, 10);
	printf("%d", i);
	return (i);
}
