#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * one or more chars in string that is not 0 or 1 or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int length = 0, i;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += 1 << (length - 1 - i);
		else if (b[i] != '0')
			return (0);
	}
	return (sum);
}
