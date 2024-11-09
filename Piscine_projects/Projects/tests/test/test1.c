#include <unistd.h>
#include <stdio.h>

void ft_putchar(char *x)
{
	char result = *x;
	// write(1, &result, 1);
	putchar(result);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("First argument: ");
		ft_putchar(argv[1]);

		printf("\nSecond argument: ");
		ft_putchar(argv[2]);

		printf("\n");
	}
	return (0);
}