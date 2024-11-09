#include <unistd.h>

void ft_mul(int *ptr, int a)
{
	*ptr = (*ptr) * a;
}

#include <stdio.h>
int main(void)
{
	int x = 3;
	int y = 4;
	printf("The values before mult:\n Pointer: %d Int: %d\n", x, y);
	ft_mul(&x, y);
	printf("The values after mult:\n Pointer: %d Int: %d", x, y);
	return(0);
}
