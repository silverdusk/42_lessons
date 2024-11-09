/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:08:09 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/14 20:06:43 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

/*
#include <stdio.h>
int main(void)
{
	int nb0 = 12345;
	ft_putnbr(nb0);
    write(1, "\n", 1);
	int nb1 = -2147483648;
    ft_putnbr(nb1);
	write(1, "\n", 1);
	int nb2 = -0;
    ft_putnbr(nb2);
	write(1, "\n", 1);
	int nb3 = 2147483647;
    ft_putnbr(nb3);
}
*/