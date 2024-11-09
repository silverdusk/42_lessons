/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:15:10 by joaomigu          #+#    #+#             */
/*   Updated: 2024/02/06 18:17:30 by joaomigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
	{
		nb += 2;
	}
	return (nb);
}
/*
int	main(void)
{
	int	result;

	result = ft_find_next_prime(2147483644);
}*/
