/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:00:28 by lhonorio          #+#    #+#             */
/*   Updated: 2024/02/10 19:09:40 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb == 0)
		return (0);
	while (nb > num * num)
		num++;
	if (nb == num * num)
		return (num);
	else
		return (0);
}

#include <stdio.h>

int main (void)
{
        printf("%d\n", ft_sqrt(0));
}
