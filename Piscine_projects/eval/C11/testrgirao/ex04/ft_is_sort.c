/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:32:22 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/15 13:49:26 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	idx;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	idx = 1;
	while (idx < length)
	{
		asc += f(tab[idx - 1], tab[idx]) <= 0;
		desc += f(tab[idx - 1], tab[idx]) >= 0;
		++idx;
	}
	return (length == 0 || desc == (length - 1) || asc == (length - 1));
}
