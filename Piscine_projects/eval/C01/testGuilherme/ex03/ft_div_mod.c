/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:11:30 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:39:53 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
 int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 0;
	b = 0;
	if (b != 0)
	{
		ft_div_mod(a, b, &div, &mod);
		printf("Division: %d, Modulus: %d", div, mod);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
