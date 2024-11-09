/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnasiri <nnasiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:40:01 by nnasiri           #+#    #+#             */
/*   Updated: 2024/01/27 11:24:16 by nnasiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_number_length;
char	g_numb_arr[10];

void	recursive_func(int pre_digit, int current_position)
{
	int	i;

	if (current_position == g_number_length)
	{
		write(1, g_numb_arr, g_number_length);
		write(1, ", ", 2);
		return ;
	}
	if (pre_digit == 9)
		return ;
	i = pre_digit;
	while (++i <= 10 - g_number_length + current_position)
	{
		g_numb_arr[current_position] = '0' + i;
		recursive_func(i, current_position + 1);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	g_number_length = n;
	while (i < 10 - n)
	{
		g_numb_arr[0] = '0' + i;
		recursive_func(i++, 1);
	}
	print_last(i);
}
