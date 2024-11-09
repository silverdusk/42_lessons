/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:08:09 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/04 12:59:38 by kmatskev         ###   ########.fr       */
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


#include <stdio.h>
int main(void)
{
	int nb0 = 12345;
	ft_putnbr(nb0);
    printf("\n");
	int nb1 = -2147483648;
    ft_putnbr(nb1);
	printf("\n");
	int nb2 = -0;
    ft_putnbr(nb2);
	printf("\n");
	int nb3 = 2147483647;
    ft_putnbr(nb3);
	printf("\n");
}
