#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

#define FAIL "************** TEST FAILED *************\n\n"
#define PASS "************** TEST PASSED *************\n\n"

int	main(void)
{
	int a, b; // Variables to store lengths for comparison
	unsigned int u;
	int num;
	char *str;
	char c;

	u = 0xFFFFFFFF;
	num = -42;
	str = "Hello, world!";
	c = 'A';

	// ########################################
	// x tests
	printf("========== Hexadecimal Lowercase (%%x) Tests ==========\n");
	printf("Test: %%x with 0\n");
	a = printf(" printf out: [%x]\n", 0);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%x]\n", 0);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%x with -1\n");
	a = printf(" printf out: [%x]\n", -1);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%x]\n", -1);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%x with UINT_MAX\n");
	a = printf(" printf out: [%x]\n", UINT_MAX);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%x]\n", UINT_MAX);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// X tests
	printf("========== Hexadecimal Uppercase (%%X) Tests ==========\n");
	printf("Test: %%X with 0\n");
	a = printf(" printf out: [%X]\n", 0);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%X]\n", 0);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%X with -1\n");
	a = printf(" printf out: [%X]\n", -1);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%X]\n", -1);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%X with UINT_MAX\n");
	a = printf(" printf out: [%X]\n", UINT_MAX);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%X]\n", UINT_MAX);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// d & i tests
	printf("========== Decimal (%%d) and Integer (%%i) Tests ==========\n");
	printf("Test: %%d with INT_MAX\n");
	a = printf(" printf out: [%d]\n", INT_MAX);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%d]\n", INT_MAX);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%d with INT_MIN\n");
	a = printf(" printf out: [%d]\n", INT_MIN);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%d]\n", INT_MIN);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// u tests
	printf("========== Unsigned Integer (%%u) Tests ==========\n");
	printf("Test: %%u with UINT_MAX\n");
	a = printf(" printf out: [%u]\n", UINT_MAX);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%u]\n", UINT_MAX);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// c tests
	printf("========== Character (%%c) Tests ==========\n");
	printf("Test: %%c with 'A'\n");
	a = printf(" printf out: [%c]\n", 'A');
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%c]\n", 'A');
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// s tests
	printf("========== String (%%s) Tests ==========\n");
	printf("Test: %%s with \"Hello, world!\"\n");
	a = printf(" printf out: [%s]\n", "Hello, world!");
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%s]\n", "Hello, world!");
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// p tests
	printf("========== Pointer (%%p) Tests ==========\n");
	printf("Test: %%p with NULL\n");
	a = printf(" printf out: [%p]\n", NULL);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%p]\n", NULL);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	printf("Test: %%p with (void*)UINT_MAX\n");
	a = printf(" printf out: [%p]\n", (void *)UINT_MAX);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%p]\n", (void *)UINT_MAX);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	// ########################################
	// Additional Complex Tests
	printf("========== Complex and Edge Cases ==========\n");
	printf("Test: Mixed specifiers %%d %%X %%s %%p\n");
	a = printf(" printf out: [%d %X %s %p]\n", 42, UINT_MAX, "test", &num);
	printf(" printf length: %d\n", a);
	b = ft_printf(" ft_printf out: [%d %X %s %p]\n", 42, UINT_MAX, "test", &num);
	printf(" ft_printf length: %d\n", b);
	printf(a == b ? PASS : FAIL);

	return 0;
}
