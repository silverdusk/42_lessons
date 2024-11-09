/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:24:28 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/27 19:40:42 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		lets_print(i + '0');
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
}
*/