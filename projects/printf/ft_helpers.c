/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:23:42 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/11 13:59:46 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (!str)
		str = "(null)";
	return (write(1, str, ft_strlen(str)));
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_putnbr_base(long number, const char *base)
{
	long	base_len;
	int		len;

	base_len = ft_strlen(base);
	if (base_len < 2)
	{
		return (0);
	}
	len = 0;
	if (number < 0)
	{
		len += ft_putchar('-');
		number = -number;
	}
	if (number >= base_len)
	{
		len += ft_putnbr_base(number / base_len, base);
	}
	len += ft_putchar(base[number % base_len]);
	return (len);
}

int	ft_putnbr_base_ull(unsigned long long n, const char *base)
{
	size_t	baselen;
	int		count;

	baselen = ft_strlen(base);
	if (baselen < 2)
		return (0);
	count = 0;
	if (n >= baselen)
		count += ft_putnbr_base_ull(n / baselen, base);
	count += ft_putchar(base[n % baselen]);
	return (count);
}
