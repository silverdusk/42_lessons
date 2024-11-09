/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:50:57 by npizzi            #+#    #+#             */
/*   Updated: 2024/01/28 20:18:40 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	t_sortf_int_tab(int *tab, int size)
{
	int	temp;
	int	j;
	int	i;

	j = 0;
	while (j <= size - 1)
	{
		i = 0;
		while (i <= size - 1)
		{
			if (tab[j] <= tab[i])
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
				i++;
			}
			else
				i++;
		}
		j++;
	}
}

int main(void)
{
	int tab[] = {1,3,5,7,8,9,22};
	t_sortf_int_tab(tab, 7);
	int i;
	i = 0;
	while(i < 7)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	return (0);
}
