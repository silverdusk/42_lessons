/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:05:40 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/06 19:21:30 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ft_printf.h"

static int	ft_puthex_ulong(unsigned long long nbr, int uppercase)
{
	const char	*digits_lower;
	const char	*digits_upper;
	const char	*digits;
	int			count;

	digits_lower = "0123456789abcdef";
	digits_upper = "0123456789ABCDEF";
	if (uppercase)
		digits = digits_upper;
	else
		digits = digits_lower;
	count = 0;
	if (nbr >= 16)
	{
		count += ft_puthex_ulong(nbr / 16, uppercase);
		count += ft_putchar(digits[nbr % 16]);
	}
	else
		count += ft_putchar(digits[nbr]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	uintptr_t	address;
	int			count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	address = (uintptr_t)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex_ulong(address, 0);
	return (count);
}

/*
** Helper function that prints an unsigned long long in hex.
** If 'uppercase' is nonzero, use uppercase letters (A-F).
** Otherwise, use lowercase letters (a-f).
**
** ft_putptr: prints a pointer (void *) in hexadecimal, with "0x" prefix.
** If ptr == NULL, prints "(nil)".
** Otherwise, prints something like "0x7ffee3c5b7c8".
*/
