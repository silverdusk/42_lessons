#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

#include <stdio.h>
int main(void)
{
	int i;

	i = -1;
	ft_putnbr(i);
	printf("\n");
}