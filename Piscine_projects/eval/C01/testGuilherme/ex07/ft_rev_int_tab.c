/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:48:48 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:44:29 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporary;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temporary = tab[start];
		tab[start] = tab[end];
		tab[end] = temporary;
		start++;
		end--;
	}
}

 int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = 5;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
