/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:20:26 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/14 19:49:07 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] == '+' || b[i] == '-') || (b[i] <= ' ' || b[i] > '~'))
		{
			return (0);
		}
		j = 0;
		while (j < i)
		{
			if (b[i] == b[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_char_converter(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_str_checker(char *str, int *ptr)
{
	int	i;
	int	sign;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	sign = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	*ptr = i;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	digit;
	int	result;
	int	base_size;

	base_size = ft_base_check(base);
	result = 0;
	i = 0;
	if (base_size >= 2)
	{
		sign = ft_str_checker(str, &i);
		digit = ft_char_converter(str[i], base);
		while (digit != -1)
		{
			result = (result * base_size) + digit;
			i++;
			digit = ft_char_converter(str[i], base);
		}
		return (result * sign);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char	str[] = "  ---+----+02Aab567";
	char base[] = "0123456789ABCDEF";
	printf("%i\n", ft_atoi_base(&str[0], &base[0]));
}
*/