/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:09:14 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/17 23:14:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

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

#endif /* FT_PRINTF_H */
