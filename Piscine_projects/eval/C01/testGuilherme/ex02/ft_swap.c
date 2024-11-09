/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:19:03 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:38:02 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}
 int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	printf("%d, %d\n", x, y);
	ft_swap(&y, &x);
	printf("%d, %d\n", x, y);
} 
