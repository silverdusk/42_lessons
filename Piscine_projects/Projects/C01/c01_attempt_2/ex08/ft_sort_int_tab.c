/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:43:24 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 19:10:25 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	sorted;

	sorted = 0;
	j = 0;
	while (!sorted)
	{
		sorted = 1;
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				sorted = 0;
			}
			j++;
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {3, 1, 5, 4, 2, 7};
	int size = 6;
	int i = 0;
	ft_sort_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/