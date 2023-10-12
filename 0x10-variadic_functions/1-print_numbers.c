#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
		printf("%s", separator);
		}
		printf("%d", va_arg(string, int));
	}
	va_end(string);
	printf("\n");
}
