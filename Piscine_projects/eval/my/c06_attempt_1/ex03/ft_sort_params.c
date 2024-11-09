/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:30:48 by kirill            #+#    #+#             */
/*   Updated: 2024/02/06 18:16:31 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	return ((int)(unsigned char)s1[index] - (int)(unsigned char)s2[index]);
}

void	ft_print_params(int argc, char *argv[])
{
	int	argnum;
	int	index;

	argnum = 1;
	while (argnum < argc)
	{
		index = 0;
		while (argv[argnum][index] != '\0')
		{
			ft_putchar(argv[argnum][index]);
			index++;
		}
		ft_putchar('\n');
		argnum++;
	}
}

int	main(int argc, char *argv[])
{
	int	argnum;
	int	index;
	int	i;

	argnum = 1;
	while (argnum < argc)
	{
		index = argnum;
		while (ft_strcmp(argv[index], argv[index - 1]) < 0 && index > 1)
		{
			i = 0;
			while (argv[index][i] != '\0' || argv[index - 1][i] != '\0')
			{
				argv[index][i] = argv[index][i] ^ argv[index - 1][i];
				argv[index -1][i] = argv[index -1][i] ^ argv[index][i];
				argv[index][i] = argv[index][i] ^ argv[index - 1][i];
				i ++;
			}
			index--;
		}
		argnum++;
	}
	ft_print_params(argc, argv);
	return (0);
}
