# include <stdio.h>

void	rush_numb(void)
{
	int	letterNum;
	int result;

	letterNum = 13;
	result = letterNum % 5;
	printf("the number of subject is: %d\n", result);
}

int main(void)
{
	rush_numb();
}
