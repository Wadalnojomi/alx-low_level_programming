#include "main.h"
#include <string.h>

/**
 * _strlen - prints the length of a string.
 * @s: this is the entry.
 * Return: 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
