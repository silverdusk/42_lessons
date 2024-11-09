/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miafonso <miafonso@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:43:48 by miafonso          #+#    #+#             */
/*   Updated: 2024/01/25 09:43:51 by miafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*int main()
{
    int positivo = 1;
    int zero = 0;
    int negativo = -1;

    ft_is_negative(positivo);
    ft_is_negative(zero);
    ft_is_negative(negativo);
}*/