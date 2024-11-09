/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:24:33 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 13:21:16 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int	is_valid_op(char *str)
{
	int		length;
	char	op;

	length = 0;
	while (str[length])
		++length;
	if (length != 1)
		return (0);
	op = str[0];
	return (op == '+' || op == '-' || op == '*' || op == '/' || op == '%');
}

int	op_index(char *operators, char op)
{
	int	idx;

	idx = -1;
	while (++idx < 5)
		if (operators[idx] == op)
			return (idx);
	return (idx);
}

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	void	(*functions[5])(int, int);
	char	*operators;

	if (argc != 4)
		return (0);
	if (!is_valid_op(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	operators = "+-*/%";
	functions[0] = &ft_plus;
	functions[1] = &ft_minus;
	functions[2] = &ft_times;
	functions[3] = &ft_div;
	functions[4] = &ft_mod;
	functions[op_index(operators, argv[2][0])](a, b);
}
