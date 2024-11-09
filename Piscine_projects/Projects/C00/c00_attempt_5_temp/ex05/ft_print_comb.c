/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:57:43 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/12 14:42:20 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_line(int left, int mid, int right)
{
	ft_putchar(left + 48);
	ft_putchar(mid + 48);
	ft_putchar(right + 48);
	if (left == 7 && mid == 8 && right == 9)
		return ;
	ft_putchar(',');
	ft_putchar(32);
}

void	ft_print_recursive_comb(int left, int mid, int right)
{
	ft_print_line(left, mid, right);
	if (left == 7 && mid == 8 && right == 9)
	{
		return ;
	}
	if (++right > 9)
	{
		right = ++mid + 1;
	}
	if (mid > 8)
	{
		mid = ++left + 1;
		right = mid + 1;
	}
	ft_print_recursive_comb(left, mid, right);
}

void	ft_print_comb(void)
{
	int	left;
	int	mid;
	int	right;

	left = 0;
	mid = 1;
	right = 2;
	ft_print_recursive_comb(left, mid, right);
}

/*
int main(void)
{
	ft_print_comb();
}
*/