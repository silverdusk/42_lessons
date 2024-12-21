/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:09:14 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/21 16:01:00 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// ======================== STRUCTURES ========================
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

// ======================== FT_PRINTF FUNCTIONS ========================
int		ft_printf(const char *format, ...);
void	ft_init_flags(t_flags *flags);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printf(const char *format, ...);

#endif /* FT_PRINTF_H */
