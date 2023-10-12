#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str;
	va_list names;

	if (separator == NULL)
		separator = "";
	va_start(names, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(names, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(names);
	printf("\n");
}
