/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:02:35 by jsubtil-          #+#    #+#             */
/*   Updated: 2024/02/12 17:11:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

 #include <unistd.h>

int	main(void)
{
	int x;

	x = ft_is_prime(-2) + 48;
	write(1, &x, 1);
}