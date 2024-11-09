/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:26:48 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 19:01:12 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	*temp;

	j = 0;
	if (size % 2 == 0)
	{
		while (j <= 0)
		{
			temp = &tab[(size - 1 - j)];
			ft_swap(&tab[j], temp);
			j++;
		}
	}
	else
	{
		while (j <= (size - (size - 1)))
		{
			temp = &tab[(size - 1 - j)];
			ft_swap(&tab[j], temp);
			j++;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4 ,5};
	int size = 5;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/