#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all parameters.
 * @n: number to sum.
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);

	return (sum);
}
