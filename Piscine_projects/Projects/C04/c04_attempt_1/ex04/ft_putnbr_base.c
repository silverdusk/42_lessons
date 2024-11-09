/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:30:37 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/15 11:51:04 by kmatskev         ###   ########.fr       */
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

void	ft_putnbr_base_main_calc(int nbr, char *base, unsigned int base_size)
{
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
	{
		n = nbr;
	}
	if (n >= base_size)
	{
		ft_putnbr_base_main_calc(n / base_size, base, base_size);
	}
	write(1, &(base[n % base_size]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;

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

#include <limits.h>
int main(void)
{
	int nb0 = INT_MIN;
	char *base0 = "0123456789ABCDEF";
	ft_putnbr_base(nb0, base0);
    write(1, "\n", 1);
}
