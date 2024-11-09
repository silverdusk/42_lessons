/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:35:58 by hbourlot          #+#    #+#             */
/*   Updated: 2024/01/27 16:39:34 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	a;
	int	b;

	a = 'a';
	b = 'z';
	while (a <= b)
	{
		write (1, &b, 1);
		b--;
	}
}
 
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
