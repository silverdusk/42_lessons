/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:28:05 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 08:28:57 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	idx;
	int	counter;

	idx = -1;
	counter = 0;
	while (++idx < length)
		counter += f(tab[idx]) != 0;
	return (counter);
}
