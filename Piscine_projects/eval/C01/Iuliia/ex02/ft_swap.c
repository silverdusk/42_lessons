/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:37:15 by ifilatov          #+#    #+#             */
/*   Updated: 2024/01/29 17:53:54 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int	main()
{
	int	x = 5;
	int 	y = 10;

	printf("x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("x = %d, y = %d\n", x, y);
	return(0);
}
