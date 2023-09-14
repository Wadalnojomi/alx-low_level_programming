#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 * @n: Entr
 */

void print_square(int n)
{
	if (n > 0)
	{
		int r;

		for (r = 1; r <= n; r++)
		{
			int c;

			for (c = 1; c <= n; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
