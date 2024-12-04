/* #include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

#define FAIL "************** TEST FAILED *************\n\n"
#define PASS "************** TEST PASSED *************\n\n"

int main(void)
{
	int a, b; // Variables to store lengths for comparison
	int pf, fp; // For intermediate outputs
	unsigned int u;
	int num = -42;
	char *str = "Hello, world!";
	char c = 'A';

	printf("========== Hexadecimal Tests ==========\n");
	// Hexadecimal (%x)
	int test_values[] = {0, -1, 1, 10, 99, -101, INT_MAX, INT_MIN, UINT_MAX};
	for (int i = 0; i < 9; i++) {
		printf("Test: %%x with %d\n", test_values[i]);
		a = printf(" printf out: [%x]\n", test_values[i]);
		b = ft_printf(" ft_printf out: [%x]\n", test_values[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Combined hex test
	printf("Combined Test: %%x with multiple values\n");
	a = printf(" printf out: [%x %x %x %x]\n", INT_MAX, INT_MIN, 0, -42);
	b = ft_printf(" ft_printf out: [%x %x %x %x]\n", INT_MAX, INT_MIN, 0, -42);
	printf("printf length: %d, ft_printf length: %d\n", a, b);
	a == b ? printf(PASS) : printf(FAIL);

	// Hexadecimal (%X)
	printf("\n========== Uppercase Hexadecimal Tests ==========\n");
	for (int i = 0; i < 9; i++) {
		printf("Test: %%X with %d\n", test_values[i]);
		a = printf(" printf out: [%X]\n", test_values[i]);
		b = ft_printf(" ft_printf out: [%X]\n", test_values[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Combined uppercase hex test
	printf("Combined Test: %%X with multiple values\n");
	a = printf(" printf out: [%X %X %X %X]\n", INT_MAX, INT_MIN, 0, -42);
	b = ft_printf(" ft_printf out: [%X %X %X %X]\n", INT_MAX, INT_MIN, 0, -42);
	printf("printf length: %d, ft_printf length: %d\n", a, b);
	a == b ? printf(PASS) : printf(FAIL);

	// Character Tests (%c)
	printf("\n========== Character Tests ==========\n");
	char chars[] = {'0', '1', 'a', 'z', '0' - 256, '0' + 256};
	for (int i = 0; i < 6; i++) {
		printf("Test: %%c with '%c'\n", chars[i]);
		a = printf(" printf out: [%c]\n", chars[i]);
		b = ft_printf(" ft_printf out: [%c]\n", chars[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Integer Tests (%d, %i)
	printf("\n========== Integer Tests ==========\n");
	int int_values[] = {-99, 100, INT_MAX, INT_MIN, UINT_MAX};
	for (int i = 0; i < 5; i++) {
		printf("Test: %%d with %d\n", int_values[i]);
		a = printf(" printf out: [%d]\n", int_values[i]);
		b = ft_printf(" ft_printf out: [%d]\n", int_values[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Pointer Tests (%p)
	printf("\n========== Pointer Tests ==========\n");
	void *pointers[] = {(void *)-1, (void *)1, (void *)15, (void *)0, NULL};
	for (int i = 0; i < 5; i++) {
		printf("Test: %%p with pointer %p\n", pointers[i]);
		a = printf(" printf out: [%p]\n", pointers[i]);
		b = ft_printf(" ft_printf out: [%p]\n", pointers[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Unsigned Integer Tests (%u)
	printf("\n========== Unsigned Integer Tests ==========\n");
	int unsigned_values[] = {-100, INT_MAX, INT_MIN, UINT_MAX};
	for (int i = 0; i < 4; i++) {
		printf("Test: %%u with %d\n", unsigned_values[i]);
		a = printf(" printf out: [%u]\n", unsigned_values[i]);
		b = ft_printf(" ft_printf out: [%u]\n", unsigned_values[i]);
		printf("printf length: %d, ft_printf length: %d\n", a, b);
		a == b ? printf(PASS) : printf(FAIL);
	}

	// Advanced Format Tests
	printf("\n========== Advanced Format Tests ==========\n");
	printf("Test: Left justify and precision with %%d\n");
	pf = printf(" printf out: >%-10d<\n", num);
	fp = ft_printf(" ft_printf out: >%-10d<\n", num);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	pf == fp ? printf(PASS) : printf(FAIL);

	printf("Test: Zero-padding with %%d\n");
	pf = printf(" printf out: >%010d<\n", num);
	fp = ft_printf(" ft_printf out: >%010d<\n", num);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	pf == fp ? printf(PASS) : printf(FAIL);

	printf("Test: String precision\n");
	pf = printf(" printf out: >%.5s<\n", str);
	fp = ft_printf(" ft_printf out: >%.5s<\n", str);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	pf == fp ? printf(PASS) : printf(FAIL);

	printf("Test: Left-justify string\n");
	pf = printf(" printf out: >%-20s<\n", str);
	fp = ft_printf(" ft_printf out: >%-20s<\n", str);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);
	pf == fp ? printf(PASS) : printf(FAIL);

	return 0;
} */


/* #include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	main(void)
{
	char			c;
	char			d;
	unsigned int	u;
	int				pf;
	int				fp;
	int				num;
	char			*s;
	char			*s2;

	s = "@@@";
	s2 = NULL;
	c = 'a';
	d = 'b';
	num = 0x7FFFFFFF;
	u = 0xFFFFFFFF;

	printf("========== Simple Tests ==========\n");
	printf("Test: c%%de\n");
	pf = printf("printf output: c%%de\n");
	fp = ft_printf("ft_printf output: c%%de\n");
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Complex Test ==========\n");
	printf("Test: Mixed formats\n");
	pf = printf("printf output: a%pbc%%de%5cfg%-20.15uhij%2sk%-20.15dlm%inop%20.15Xq%xr\n",
			 (void *)&c, d, u, s, num, 0, u, u);
	fp = ft_printf("ft_printf output: a%pbc%%de%5cfg%-20.15uhij%2sk%-20.15dlm%inop%20.15Xq%xr\n",
			 (void *)&c, d, u, s, num, 0, u, u);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Hexadecimal and Integer Tests ==========\n");
	printf("Test: >%%20.15Xq< with unsigned int\n");
	pf = printf("printf output: >%20.15Xq<\n", u);
	fp = ft_printf("ft_printf output: >%20.15Xq<\n", u);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("Test: >%%.3d< with -1234\n");
	pf = printf("printf output: >%.3d<\n", -1234);
	fp = ft_printf("ft_printf output: >%.3d<\n", -1234);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== String Tests ==========\n");
	printf("Test: >%%-9sScience!< with Aperture\n");
	pf = printf("printf output: >%-9sScience!<\n", "Aperture");
	fp = ft_printf("ft_printf output: >%-9sScience!<\n", "Aperture");
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Pointer Tests ==========\n");
	printf("Test: >%%8p< with NULL\n");
	pf = printf("printf output: >%8p-<\n", NULL);
	fp = ft_printf("ft_printf output: >%8p-<\n", NULL);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Null String Test ==========\n");
	printf("Test: >%%8s< with NULL string\n");
	pf = printf("printf output: >%8s<\n", s2);
	fp = ft_printf("ft_printf output: >%8s<\n", s2);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Integer Range Test ==========\n");
	printf("Test: >%%i|%%i|%%i< with INT_MIN, 0, INT_MAX\n");
	pf = printf("printf output: %i|%i|%i\n", INT_MIN, 0, INT_MAX);
	fp = ft_printf("ft_printf output: %i|%i|%i\n", INT_MIN, 0, INT_MAX);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Mixed Test ==========\n");
	pf = printf("printf output: a%pbc%%de%cfg%uh%cij%sk%dlm%inop%Xq%xr\n",
			 (void *)&c, d, u, '\0', s, num, 0, u, u);
	fp = ft_printf("ft_printf output: a%pbc%%de%cfg%uh%cij%sk%dlm%inop%Xq%xr\n",
			 (void *)&c, d, u, '\0', s, num, 0, u, u);
	printf("printf length: %d, ft_printf length: %d\n", pf, fp);

	printf("\n========== Error Handling Tests ==========\n");
	fclose(stdout); // Close standard output to simulate an error
	pf = printf("printf: error handling test\n");
	fp = ft_printf("ft_printf: error handling test\n");
	int written = write(1, "Write test\n", 11);
	dprintf(2, "Error outputs: printf = %d, ft_printf = %d, write = %d\n", pf, fp, written);

	printf("\n========== Null Input Test ==========\n");
	pf = printf(NULL); // This should handle gracefully
	dprintf(2, "printf returned: %d\n", pf);
	fp = ft_printf(NULL); // This should handle gracefully
	dprintf(2, "ft_printf returned: %d\n", fp);

	return (0);
} */

/* #include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	// Section 1: Basic Width and Precision Tests
	printf("========== Width and Precision Tests ==========\n");
	printf("Test 1: Precision for integer\n");
	int ft1 = ft_printf("ft_printf output: Width and precision: %.3d\n", 4201);
	int p1 = printf("printf output: Width and precision: %.3d\n", 4201);
	printf("ft_printf length: %d, printf length: %d\n", ft1, p1);

	printf("\nTest 2: Left justify with width\n");
	ft1 = ft_printf("ft_printf output: Left justify: %-10d|\n", 42);
	p1 = printf("printf output: Left justify: %-10d|\n", 42);
	printf("ft_printf length: %d, printf length: %d\n", ft1, p1);

	// Section 2: Hexadecimal Uppercase with Various Widths
	printf("\n========== Hexadecimal Uppercase Tests ==========\n");
	printf("Test 3: Hexadecimal with mixed inputs\n");
	int ft2 = ft_printf("ft_printf output: %-9X %-10X %-11X %-12X %-13X %-14X %-15X\n",
						INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	int p2 = printf("printf output: %-9X %-10X %-11X %-12X %-13X %-14X %-15X\n",
					INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("ft_printf length: %d, printf length: %d\n", ft2, p2);

	// Section 3: Pointer Tests
	printf("\n========== Pointer Tests ==========\n");
	printf("Test 4: Pointer with small width\n");
	int ft3 = ft_printf("ft_printf output: %2p\n", (void *)-1);
	int p3 = printf("printf output: %2p\n", (void *)-1);
	printf("ft_printf length: %d, printf length: %d\n", ft3, p3);

	return (0);
} */


/* #include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int ret1, ret2;
	int num = 42;

	printf("========== Simple String Tests ==========\n");
	ret1 = printf("1: Hello, %s!\n", "World");
	ret2 = ft_printf("1: Hello, %s!\n", "World");
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Integer Tests ==========\n");
	ret1 = printf("2: Number: %d\n", 42);
	ret2 = ft_printf("2: Number: %d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Width and Precision Tests ==========\n");
	ret1 = printf("3: Width and precision: %10.5d\n", 42);
	ret2 = ft_printf("3: Width and precision: %10.5d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Flags Tests ==========\n");
	ret1 = printf("4: Left justify: %-10d\n", 42);
	ret2 = ft_printf("4: Left justify: %-10d\n", 42);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Hexadecimal Tests ==========\n");
	ret1 = printf("5: Hex: %#x\n", 255);
	ret2 = ft_printf("5: Hex: %#x\n", 255);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	printf("========== Pointer Tests ==========\n");
	ret1 = printf("6: Pointer: %p\n", &num);
	ret2 = ft_printf("6: Pointer: %p\n", &num);
	printf("printf length: %d, ft_printf length: %d\n\n", ret1, ret2);

	return 0;
} */
