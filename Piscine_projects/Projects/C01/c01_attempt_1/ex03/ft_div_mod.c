/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:14:21 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 18:58:38 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 3;
	int res_div;
	int res_mod;

	ft_div_mod(a, b, &res_div, &res_mod);
	printf("%d / %d = %d. Reminder = %d\n", a, b, res_div, res_mod);
}
*/