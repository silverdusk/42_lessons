/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:17:29 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 08:18:40 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	idx;
	int	*result;

	result = malloc(length * sizeof (int));
	if (!result)
		return (NULL);
	idx = 0;
	while (idx < length)
	{
		result[idx] = f(tab[idx]);
		++idx;
	}
	return (result);
}
