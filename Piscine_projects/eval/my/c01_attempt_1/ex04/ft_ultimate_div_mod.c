/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:09:31 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 18:58:48 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *a;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 2;

	printf("Before a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After a = %d, b = %d\n", a, b);

	int	x = 10;
	int	y = 3;

	printf("Before x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After x = %d, y = %d\n", x, y);
}
*/
