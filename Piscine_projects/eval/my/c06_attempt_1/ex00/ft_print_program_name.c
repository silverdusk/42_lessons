/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:46 by kirill            #+#    #+#             */
/*   Updated: 2024/02/06 18:29:28 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	if (argc == 1)
	{
		while (argv[0][index] != '\0')
		{
			ft_putchar(argv[0][index]);
			index ++;
		}
		ft_putchar('\n');
	}
}
