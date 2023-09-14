#include <unistd.h>
#include "main.c"
/**
 * _putchar - Write character c to stdout
 * @c: the character to print
 * Return: Always 0 (success )
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
