/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:05:40 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/11 14:01:19 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ulong(unsigned long long nbr, int uppercase)
{
	const char	*digits_lower;
	const char	*digits_upper;
	const char	*digits;
	int			count;

	digits_lower = "0123456789abcdef";
	digits_upper = "0123456789ABCDEF";
	if (!nbr)
	{
		return (ft_putchar('0'));
	}
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

int	ft_putptr_hex(void *ptr)
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

/*
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	void	*ptr1 = NULL;
	void	*ptr2 = (void *)0x1234abcd;
	void	*ptr3 = (void *)0xffffffffffffffff;

	// Test NULL pointer
	printf("Expected: (nil), Output: ");
	ft_putptr(ptr1);
	printf("\n");

	// Test valid pointer
	printf("Expected: 0x1234abcd, Output: ");
	ft_putptr(ptr2);
	printf("\n");

	// Test maximum pointer address
	printf("Expected: 0xffffffffffffffff, Output: ");
	ft_putptr(ptr3);
	printf("\n");

	return (0);
} */

/*
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	unsigned long long	n1 = 0;
	unsigned long long	n2 = 255;
	unsigned long long	n3 = 4294967295; // UINT_MAX
	unsigned long long	n4 = 9223372036854775807; // LLONG_MAX

	// Test lowercase hex
	printf("Expected: 0, Output: ");
	ft_puthex_ulong(n1, 0);
	printf("\n");

	printf("Expected: ff, Output: ");
	ft_puthex_ulong(n2, 0);
	printf("\n");

	// Test uppercase hex
	printf("Expected: FFFFFFFF, Output: ");
	ft_puthex_ulong(n3, 1);
	printf("\n");

	// Test very large number
	printf("Expected: 7FFFFFFFFFFFFFFF, Output: ");
	ft_puthex_ulong(n4, 1);
	printf("\n");

	return (0);
} */
