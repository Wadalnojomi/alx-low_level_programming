#include "main.h"

/**
 * print_line -  Write a function that draws a straight line in the terminal
 * @n: this is the entry
 */
void print_line(int n)
{
	int i;

	for (i = 1; n >= 1 && i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');

}
