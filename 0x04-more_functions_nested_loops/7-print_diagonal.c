#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: this is the size of the diagonal
 * Return: There is no error
 */
void print_diagonal(int n)
{
int i, j;

for (i = 1; n > 0 && i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j == i)
{
_putchar(92);
}
else
{
_putchar(32);
}
}
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
