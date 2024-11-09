#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 3;
	b = 5;

	printf("a original: %d\n", a);
	printf("b original: %d\n", b);
	printf("\n");
	a = a^b;
	printf("a after 1#xor: %d\n", a);
	printf("b after 1#xor: %d\n", b);
	printf("\n");
	b = a^b;
	printf("a after 2#xor: %d\n", a);
	printf("b after 2#xor: %d\n", b);
	printf("\n");
	a = a^b;
	printf("a after 3#xor: %d\n", a);
	printf("b after 3#xor: %d\n", b);
	printf("\n");
}