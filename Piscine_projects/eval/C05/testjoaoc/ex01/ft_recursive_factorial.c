/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:57:16 by jsubtil-          #+#    #+#             */
/*   Updated: 2024/02/12 17:04:31 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

 int main (void)
{
		int nb;
		nb = 15;
		printf("%d", ft_recursive_factorial(nb));
}