#include <unistd.h>

int ft_unic_char(char *str, int current_index, char c)
{
	int i;

	i = 0;
	while (i < current_index)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void ft_union(char *str, char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_unic_char(str, i, str[i]) == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	while (dest[j] != '\0')
	{
		if (ft_unic_char(str, i, dest[j]) && ft_unic_char(dest, j, dest[j]))
		{
			write(1, &dest[j], 1);
		}
		j++;
	}
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}