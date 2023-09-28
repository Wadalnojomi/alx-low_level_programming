#include "main.h"
/**
 * my_sqrt - This is my_sqrt helper function.
 * @n:the value of the above function.
 * @g :This is the guessing value.
 *
 * Return:This is the result
 */
int my_sqrt(int n, int g)
{
	if (n == (g * g))
		return (g);
	if ((g * g) > n)
		return (-1);
	else
		return (my_sqrt_recursion(n, g + 1));
}
/**
 * _sqrt_recursion - this is my first function.
 * @n: this is my value.
 *
 * Return: This is my result of the function sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
