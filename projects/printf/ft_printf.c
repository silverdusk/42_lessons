/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:18:05 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/11 13:55:54 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(char modifier, va_list args)
{
	if (modifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (modifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (modifier == 'p')
		return (ft_putptr_hex(va_arg(args, void *)));
	else if (modifier == 'd' || modifier == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (modifier == 'u')
		return (ft_putnbr_base_ull((unsigned long long)
				va_arg(args, unsigned int), "0123456789"));
	else if (modifier == 'x')
		return (ft_putnbr_base_ull((unsigned long long)
				va_arg(args, unsigned int), "0123456789abcdef"));
	else if (modifier == 'X')
		return (ft_putnbr_base_ull((unsigned long long)
				va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (modifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
			{
				len += ft_format_handler(*format, args);
			}
		}
		else
		{
			len += ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (len);
}

/*
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	pf;
	int	fp;

	printf("ft_printf_results:\n");
	ft_printf("Hello %s\n", "world");
	ft_printf("Character: %c\n", 'A');
	ft_printf("Percentage: %%\n");
	printf("\n");
	printf("printf_results:\n");
	printf("Hello %s\n", "world");
	printf("Character: %c\n", 'A');
	printf("Percentage: %%\n");

	printf("========== Simple Tests ==========\n");
	printf("Test: c%%de\n");
	pf = printf("___printf output: c%%de\n");
	fp = ft_printf("ft_printf output: c%%de\n");
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	return (0);
} */

/*
int	main(void)
{
	//char	str[]="Hello";
	printf("\noriginal length: %d\n", printf("hello%yd%dd", 21474838));
	printf("\nmy length: %d\n", ft_printf("hello%yd%dd", 21474838));
	//printf("%d\n", ft_printf("%y","Hi"));
	//ft_printf("ggg%c, sfd%sf%ifmdfl\n", 'N', "HELLO", 3428347);
	//printf("%d\n", ft_printf("ggg%c, sfd%sf%ifmdfl", 'N', "HELLO", 3428347));
	//printf("%d\n", printf("ggg%c, sfd%sf%ifmdfl", 'N', "HELLO", 3428347));
	//printf("%d\n", ft_printf("%u\n", 429400));
	//printf("%d\n", ft_printf(" %d %d %d %d %d %d %d", INT_MAX,
	//INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	//printf("%d\n", printf(" %d %d %d %d %d %d %d", INT_MAX,
	//INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	//printf("%d\n", printf("%i%s%l\n", 4535, "HellO", '!'));
} */

/*
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ret1, ret2;
	int num = 42;

	printf("========== Simple String Tests ==========\n");
	ret1 = printf("1: Hello, %s!\n", "World");
	ret2 = ft_printf("1: Hello, %s!\n", "World");
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Integer Tests ==========\n");
	ret1 = printf("2: Number: %d\n", 42);
	ret2 = ft_printf("2: Number: %d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Width and Precision Tests ==========\n");
	ret1 = printf("3: Width and precision: %10.5d\n", 42);
	ret2 = ft_printf("3: Width and precision: %10.5d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Flags Tests ==========\n");
	ret1 = printf("4: Left justify: %-10d\n", 42);
	ret2 = ft_printf("4: Left justify: %-10d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Hexadecimal Tests ==========\n");
	ret1 = printf("5: Hex: %#x\n", 255);
	ret2 = ft_printf("5: Hex: %#x\n", 255);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Pointer Tests ==========\n");
	ret1 = printf("6: Pointer: %p\n", &num);
	ret2 = ft_printf("6: Pointer: %p\n", &num);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	return 0;
}
 */
