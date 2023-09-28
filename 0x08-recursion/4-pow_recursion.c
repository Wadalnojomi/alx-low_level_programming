#include "main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: the integer to be raised.
 * @y: power to be raised by.
 * Return: if "y" is lower than zero, return -1
 * if "y" is grater than 0 raised to the power of "y".
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
