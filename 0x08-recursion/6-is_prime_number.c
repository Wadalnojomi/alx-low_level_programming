#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime num
 * otherwise return 0.
 * is_prime_helper - Reduced the range of numbers checked for divisibility
 * @n: Is the number to be cheack.
 * @current_divisor: to check the prime numder
 * Return: if the input integer is a prime number, otherwise return 0
 */
int is_prime_helper(int n, int current_divisor)
{
	if (current_divisor == 1)
		return (1);
	else if (n % current_divisor == 0)
		return (0);
	else
		return (is_prime_helper(n, current_divisor - 1));
}
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime_helper(n, n / 2));
}
