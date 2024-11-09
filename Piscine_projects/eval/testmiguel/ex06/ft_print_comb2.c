/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:44:44 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/27 16:19:09 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printint(int a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printint((a / 10) + '0');
			ft_printint((a % 10) + '0');
			write(1, " ", 1);
			ft_printint((b / 10) + '0');
			ft_printint((b % 10) + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
