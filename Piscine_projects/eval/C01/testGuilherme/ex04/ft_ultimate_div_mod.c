/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:34:54 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:41:49 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	result = *a;
	remainder = *b;
	*a = result / remainder;
	*b = result % remainder;
}

 int	main(void)
{
	int	a;
	int	b;

	a = 9;
	b = 5;
	printf("%i, %i", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%i, %i", a, b);
}
