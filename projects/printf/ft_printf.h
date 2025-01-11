/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:09:14 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/11 14:01:57 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

// ======================== FT_PRINTF FUNCTIONS =======================
int		ft_printf(const char *format, ...);

// ======================== HELPER FUNCTIONS ==========================
int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_putnbr_base(long number, const char *base);
int		ft_putnbr_base_ull(unsigned long long n, const char *base);

// ======================== HELPER POINTER FUNCTIONS ==========================
int		ft_putptr_hex(void *ptr);

#endif /* FT_PRINTF_H */
