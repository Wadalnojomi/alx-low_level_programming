#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 *@str: this is the entry
 * Return : Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar (*str);
		str++;
	}
	putchar('\n');
}
