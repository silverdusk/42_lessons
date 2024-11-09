/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:22:14 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 09:28:07 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <unistd.h>

void	ft_plus(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	ft_times(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	ft_div(int a, int b)
{
	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
	write(1, "\n", 1);
}

void	ft_mod(int a, int b)
{
	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a % b);
	write(1, "\n", 1);
}
