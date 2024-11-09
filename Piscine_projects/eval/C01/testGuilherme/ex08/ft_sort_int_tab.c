/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:48:53 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:46:43 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {4, 12, 6, 3, 1};
	int	size;
	int	i;

	i = 0;
	size = 5;
	while (i < size)
	{
		printf("tab[%d]= %d\n", i, tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d]= %d\n", i, tab[i]);
		i++;
	}
} 
