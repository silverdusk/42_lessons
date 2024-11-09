/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:36:01 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/28 20:29:50 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int mid, int right)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (i < (x - 1))
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'A');
	}
	while (i < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'C', 'B', 'C');
	}
}