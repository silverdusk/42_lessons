int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') && str[i] != '\0')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char a[] = " -1234ab567";
	// char a[] = "1234ab567";
	ft_atoi(a);
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
}