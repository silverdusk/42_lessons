#include <unistd.h>
#include <stdio.h>

int ft_unique(char *str, int index, char c)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void ft_inter(char *str, char *dest)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_unique(str, i, str[i]) != 0))
		{
			j = 0;
			while (dest[j] != '\0')
			{

				if ((str[i] == dest[j]) && (ft_unique(dest, j, dest[j]) != 0))
				{
					write(1, &dest[j], 1);
				}
				j++;
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	// char *st1 = "rien";
	// char *st2 = "cette phrase ne cache rien";

	// ft_inter(st1, st2);
	return (0);
}