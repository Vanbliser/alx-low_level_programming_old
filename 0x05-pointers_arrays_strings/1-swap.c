#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: an integer.
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
