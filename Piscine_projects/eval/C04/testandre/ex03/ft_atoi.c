/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:40:04 by adavid-s          #+#    #+#             */
/*   Updated: 2024/02/10 18:27:46 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char *str, int *ptr)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
		a++;
	while (str[a] && (str[a] == 43 || str[a] == 45))
	{
		if (str[a] == 45)
			b = b * (-1);
		a++;
	}
	*ptr = a;
	return (b);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	a;

	result = 0;
	sign = whitespaces(str, &a);
	while (str[a] >= 48 && str[a] <= 57)
	{
		result = result * 10;
		result = result + str[a] - 48;
		a++;
	}
	result = result * sign;
	return (result);
}

int	main(void)
{
	char *x = "";
	printf("%d", ft_atoi(x));
}
