/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:47:29 by ifilatov          #+#    #+#             */
/*   Updated: 2024/01/29 18:03:21 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
#include <stdio.h>
int	main()
{
	int	a = 17;
	int	b = 0;
	int	result_div, result_mod;
		ft_div_mod(a, b, &result_div, &result_mod);

		printf("%d\n", result_div);
		printf("%d\n", result_mod);

	return(0);
}
