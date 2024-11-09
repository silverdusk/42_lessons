/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-f <tgomes-f@student.42lisboa.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:50:58 by tgomes-f          #+#    #+#             */
/*   Updated: 2024/02/09 10:02:10 by tgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || str[i] >= 58)
		{
			return (0);
		}
		++i;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int is_numeric;
	char a[] = "";
	is_numeric = ft_str_is_numeric(a);
	printf("%d\n", is_numeric);
}
