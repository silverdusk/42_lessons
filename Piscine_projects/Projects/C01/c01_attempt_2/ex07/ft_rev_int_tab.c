/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:26:48 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/30 21:00:21 by kmatskev         ###   ########.fr       */
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

	j = 0;
	while (j < size / 2)
	{
		ft_swap(&tab[j], &tab[size - 1 - j]);
		j++;
	}
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int size = 4;
	int i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
