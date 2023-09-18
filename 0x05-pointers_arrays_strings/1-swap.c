#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer to be swap.
 * @b: second integer to swap to.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
