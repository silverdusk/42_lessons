#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "  ---+---+1234ab567";
	char	str1[] = "567";
	printf("%i\n", ft_atoi(&str[0]));
	printf("%i\n", ft_atoi(&str1[0]));
}
