#include <stdio.h>

// Declare our ft_printf so main can see it
int ft_printf(const char *format, ...);

int main(void)
{
    int pf, fp;

    // Basic tests
    ft_printf("Hello %s\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Percentage: %%\n");

    printf("\n");

    printf("Hello %s\n", "world");
    printf("Character: %c\n", 'A');
    printf("Percentage: %%\n");

    // Key Test
    printf("========== Simple Tests ==========\n");
    printf("Test: c%%de\n");
    pf = printf("printf output: c%%de\n");
    fp = ft_printf("ft_printf output: c%%de\n");
    printf("printf length: %d, ft_printf length: %d\n", pf, fp);

    return 0;
}
