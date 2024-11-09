/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:21:55 by ifilatov          #+#    #+#             */
/*   Updated: 2024/01/29 18:04:54 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = temp / *b;
		*b = temp % *b;
	}
}
#include <stdio.h>
int	main()
{
	int	num1 = 17;
	int	num2 = 5;

	printf("Before division:\n");
	printf("%d\n", num1);
	printf("%d\n", num2);

	ft_ultimate_div_mod(&num1, &num2);

	printf("\nAfter division:\n");
	printf("%d\n", num1);
	printf("%d\n", num2);

	return(0);
}
