#include <string.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	char *s1 = argv[1];
	char *s2 = argv[2];
	int result = strcmp(s1, s2);
	if (argc == 3)
	{
		printf("Result: %d\n", result);
	}
	return (0);
}