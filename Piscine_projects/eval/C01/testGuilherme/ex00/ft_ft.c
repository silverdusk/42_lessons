/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:33:14 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:34:30 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

 int	main(void)
{
	int	var;
	int* nbr;
	var = 36;
	nbr = &var;
	ft_ft(nbr);
	printf("%d", var);
} 
