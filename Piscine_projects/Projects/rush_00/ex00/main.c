#include <stdlib.h>

void rush(int x, int y);

int	main(int argc, char *argv[])
{
	if(argc == 3)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		rush(x, y);
		return (0);
	}
}
