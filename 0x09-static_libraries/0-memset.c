#include "main.h"
#include <stddef.h>
/**
 * _memset -  fills memory with a constant byte
 * @s: the output and the return
 * @b: the input string
 * @n: the number of bytes
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

		while (n--)
		{
			*s = b;
			s++;
		}
		if (s == NULL)
		{
			return (NULL);
		}
		return (start);
}
