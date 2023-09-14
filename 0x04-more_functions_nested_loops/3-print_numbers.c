#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: is zero
 */

void print_numbers(void)
{
	char i;

	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
