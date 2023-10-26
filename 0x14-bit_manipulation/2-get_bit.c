#include "main.h"
/**
 * get_bit -bit position
 * @n: number
 * @index: bits
 * Return: position
 */
int get_bit(unsigned long int n, unsigned  int index)
{
	if (index == 0)
		return (n & 1);
	else
		return (get_bit(n >> 1, index - 1));
}
