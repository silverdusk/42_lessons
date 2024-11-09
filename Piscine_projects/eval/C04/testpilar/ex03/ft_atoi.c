/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:10:45 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/02/03 17:29:03 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	parity;

	i = 0;
	nb = 0;
	parity = 0;
	while ((str[i] != '\0') && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			parity++;
		i++;
	}
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		nb = 10 * (nb) + (str[i] - 48);
		i++;
	}
	if (parity % 2 == 0)
		return (nb);
	return (-nb);
}
#include <stdio.h>
int	main(void)
{
	char	str[] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}