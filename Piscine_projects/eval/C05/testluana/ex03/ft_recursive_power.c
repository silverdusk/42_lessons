/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:29:33 by lhonorio          #+#    #+#             */
/*   Updated: 2024/02/10 19:07:09 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		return (ft_recursive_power(nb, power -1) * nb);
	}
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_power(5, 0));
	return (0);
}
