/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:57:43 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/12 16:50:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(int left1, int left2, int right1, int right2)
{
	ft_putchar(left1 + 48);
	ft_putchar(left2 + 48);
	ft_putchar(32);
	ft_putchar(right1 + 48);
	ft_putchar(right2 + 48);
	if (left1 == 9 && left2 == 8 && right1 == 9 && right2 == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(32);
}

void	ft_print_recursive_comb(int left1, int left2, int right1, int right2)
{
	if (left1 > 9)
	{
		return ;
	}
	if (left2 > 9)
	{
		ft_print_recursive_comb(left1 + 1, 0, left1, 0);
		return ;
	}
	if (right1 > 9)
	{
		ft_print_recursive_comb(left1, left2 + 1, left1, left2 + 1);
		return ;
	}
	if (right2 > 9)
	{
		ft_print_recursive_comb(left1, left2, right1 + 1, left2 + 1);
		return ;
	}
	if (!(left1 == right1 && left2 >= right2))
	{
		ft_print_line(left1, left2, right1, right2);
	}
	ft_print_recursive_comb(left1, left2, right1, right2 + 1);
}

void	ft_print_comb2(void)
{
	int	left1;
	int	left2;
	int	right1;
	int	right2;

	left1 = 0;
	left2 = 0;
	right1 = 0;
	right2 = 1;
	ft_print_recursive_comb(left1, left2, right1, right2);
}


int main(void)
{
	ft_print_comb2();
}

