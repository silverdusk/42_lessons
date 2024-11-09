/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:30:37 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/14 22:04:01 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *b)
{
	int	i;
	int	j;

	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] == '+' || b[i] == '-') || (b[i] <= ' ' || b[i] >= '~'))
		{
			return (0);
		}
		j = 0;
		while (j < i)
		{
			if (b[i] == b[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base_main_calc(int nbr, char *base, int base_size)
{
	unsigned int	n;

	if (nbr < 0)
	{
		n = nbr * (-1);
		nbr = n;
		write(1, "-", 1);
		ft_putnbr_base_main_calc(nbr, base, base_size);
	}
	else if (nbr >= base_size)
	{
		ft_putnbr_base_main_calc(nbr / base_size, base, base_size);
		write(1, &(base[nbr % base_size]), 1);
	}
	else
	{
		write(1, &(base[nbr % base_size]), 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = ft_base_check(base);
	if (base_size <= 1)
	{
		return ;
	}
	else
	{
		ft_putnbr_base_main_calc(nbr, base, base_size);
	}
}


int main(void)
{
	int nb0 = -10;
	char *base0 = "0123456789ABCDEF";
	ft_putnbr_base(nb0, base0);
    write(1, "\n", 1);
}
