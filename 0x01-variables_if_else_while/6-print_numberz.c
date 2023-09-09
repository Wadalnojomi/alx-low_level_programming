#include <stdio.h>

/**
 * main - Prints all numbers from 0 to 9
 * Return: always 0 (success)
 */

int main(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	}

	putchar('\n');
	return (0);
}
