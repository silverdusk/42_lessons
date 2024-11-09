/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:12:59 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/06 18:17:04 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int				counter;
	unsigned int	i;

	counter = 0;
	i = 1;
	while (nb > 0)
	{
		nb = nb - i;
		counter++;
		i += 2;
	}
	if (nb == 0)
		return (counter);
	else
		return (0);
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_sqrt(__INT32_MAX__);
	printf("%d", i);
	return (i);
}
