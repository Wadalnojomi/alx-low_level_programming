#include "main.h"
/**
 * flip_bits - flip bit
 * @n: one number
 * @m: two number
 * Return: flip bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int counter = 0;

	while (flip != 0)
	{
		flip = flip & (flip - 1);
		counter += 1;
	}
	return (counter);
}
