/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:18:05 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/17 23:24:26 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			len += write(1, format, 1);
		}
		else
		{
			write(1, format, 1);
			len++;
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

	printf("========== Simple Tests ==========\n");
	printf("Test: c%%de\n");
	pf = printf("printf output: c%%de\n");
	fp = ft_printf("ft_printf output: c%%de\n");
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
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