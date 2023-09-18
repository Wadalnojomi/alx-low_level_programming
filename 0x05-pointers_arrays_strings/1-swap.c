#include "main.h"

/**
 * void swap_int(int *a, int *b) - swaps the values of two integers.
 * @*a, *b - integers to be swap.
 *
 * Return nothing.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
