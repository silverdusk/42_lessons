/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:18:05 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/21 17:56:54 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	unsigned int	len;

	if (!str)
	{
		str = "(null)";
	}
	len = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
		len++;
	}
	return (len);
}

int	ft_putnbr(int number)
{
	int		len;
	char	c;

	len = 0;
	if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	if (number < 0)
	{
		len += ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		len += ft_putnbr(number / 10);
	}
	c = (number % 10) + '0';
	len += ft_putchar(c);
	return (len);
}

int	ft_format_handler(char modifier, va_list args)
{
	if (modifier == '%')
	{
		return (ft_putchar('%'));
	}
	else if (modifier == 'c')
	{
		return (ft_putchar(va_arg(args, int)));
	}
	else if (modifier == 'd')
	{
		return (ft_putnbr(va_arg(args, int)));
	}
	else if (modifier == 's')
	{
		return (ft_putstr(va_arg(args, char *)));
	}
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
	pf = printf("printf output: c%%de\n");
	fp = ft_printf("ft_printf output: c%%de\n");
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	return (0);
}

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
