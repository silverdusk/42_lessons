/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:56:40 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 13:39:48 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_isspace(char c)
{
	int	temp;

	temp = (c == ' ' || c == '\n' || c == '\r' || c == '\f');
	return (temp || c == '\v' || c == '\t');
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*str && ft_isspace(*str))
	{
		str++;
	}
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
		{
			sign = -1 * sign;
		}
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		result = 10 * result + (*str - '0');
		str++;
	}
	return (sign * result);
}
