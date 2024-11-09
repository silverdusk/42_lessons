/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kirill <kirill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:28 by kirill            #+#    #+#             */
/*   Updated: 2024/02/05 14:19:41 by kirill           ###   ########.fr       */
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
	argnum = argc - 1;
	if (argc > 1)
	{
		while (argnum > 0)
		{
			while (argv[argnum][index] != '\0')
			{
				ft_putchar(argv[argnum][index]);
				index ++;
			}
			ft_putchar('\n');
			index = 0;
			argnum --;
		}
	}
}
