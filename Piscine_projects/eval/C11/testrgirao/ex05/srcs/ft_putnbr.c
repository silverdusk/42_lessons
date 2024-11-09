/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:11:56 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 13:39:39 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include <unistd.h>

int	unsafe_abs(int d)
{
	if (d < 0)
		return (-d);
	return (d);
}

void	print_digit(int digit)
{
	char	character;

	character = digit + 48;
	write(1, &character, 1);
}

void	_ft_putnbr(int nb, int neg_printed)
{
	if (nb < 0 && !neg_printed)
	{
		write(1, "-", 1);
	}
	if (nb >= 10 || nb <= -10)
	{
		_ft_putnbr(nb / 10, 1);
	}
	print_digit(unsafe_abs(nb % 10));
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	_ft_putnbr(nb, 0);
}
