#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char c;
	float f;
	char *s;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				j = va_arg(args, int);
				printf("%d", j);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("nil");
					return;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'c' || format[i] == 'i'
				|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
