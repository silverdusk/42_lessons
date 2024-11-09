#include <stdio.h>
#include <unistd.h>
char ft_putchar(char *x)
{
	char c = *x;
	write(1, &c, 1);
	return (c);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_putchar(argv[1]);
	}
	return (0);
}