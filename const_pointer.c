#include <stdio.h>
/*
 * Constant Pointer VS. Pointer To A constant
 */

int main()
{
	int a = 1;

	int b = 2;

	const int *pa = &a;

	printf("const int *pa = &a: %d\n", *pa);

	pa = &b;

	printf("cont int *pa = &b %d\n", *pa);

	int const *ptr;

	int num = 10;

	ptr = &num;

	printf("*ptr : %d\n", *ptr);

	const int *const ptr_contst = &a;

	printf("ptr_contst = %d\n", *ptr_contst);

	return 0;
}
