/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:40:38 by npizzi            #+#    #+#             */
/*   Updated: 2024/01/28 20:16:20 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	i;
	int	temp;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + s);
		*(tab + s) = temp;
		i++;
		s--;
	}
}

int main(void)
{
	int tab[] = {1,3,5,7,8,9,22};
	ft_rev_int_tab(tab, 7);
	int i;
	i = 0;
	while(i < 7)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	return (0);
}
