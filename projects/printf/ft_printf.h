/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:09:14 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/06 19:28:41 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// ======================== STRUCTURES ================================
typedef struct s_flags
{
	int		minus;
	int		zero;
	int		width;
	int		precision;
	int		star;
	int		type;
	int		len;
}				t_flags;

typedef struct s_format
{
	int		width;
	int		precision;
	int		has_precision;
}				t_format;

// ======================== FT_PRINTF FUNCTIONS =======================
int		ft_printf(const char *format, ...);
void	ft_init_flags(t_flags *flags);

// ======================== HELPER FUNCTIONS ==========================
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(const char *str);
int		ft_putnbr_base(long number, const char *base);
int		ft_putnbr_base_ull(unsigned long long n, const char *base);

// ======================== HELPER POINTER FUNCTIONS ==========================
int	ft_putptr(void *ptr);

#endif /* FT_PRINTF_H */
