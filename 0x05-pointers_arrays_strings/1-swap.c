#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: first integer.
 * @b: second integer.
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}
