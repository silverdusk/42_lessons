/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:37 by kirill            #+#    #+#             */
/*   Updated: 2024/02/06 18:33:03 by kmatskev         ###   ########.fr       */
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
	int	argnum;

	index = 0;
	argnum = 1;
	if (argc > 1)
	{
		while (argnum < argc)
		{
			while (argv[argnum][index] != '\0')
			{
				ft_putchar(argv[argnum][index]);
				index ++;
			}
			ft_putchar('\n');
			index = 0;
			argnum ++;
		}
	}
}
