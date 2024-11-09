/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:18:08 by gde-mato          #+#    #+#             */
/*   Updated: 2024/01/29 16:37:11 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nb0;
	int	*nb1;
	int	**nb2;
	int	***nb3;
	int	****nb4;
	int	*****nb5;
	int	******nb6;
	int	*******nb7;
	int	********nb8;
	int	*********nb9;

	nb0 = 10;
	nb1 = &nb0;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nb9 = &nb8;
	ft_ultimate_ft(nb9);
	printf("%i\n", nb0);
}

