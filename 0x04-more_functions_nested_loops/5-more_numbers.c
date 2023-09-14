#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int m, c;

	for (m = 0; m < 10; m++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10 && c <= 14)

			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');

		}

	_putchar('\n');
	}
}
