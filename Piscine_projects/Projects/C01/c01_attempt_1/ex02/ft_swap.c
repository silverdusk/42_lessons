/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:58:44 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 18:45:26 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*
#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
*/