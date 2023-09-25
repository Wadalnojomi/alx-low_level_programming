#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be chech.
 * @accept: string to locate.
 * Return: Returns bytes in s that matches accept or NULL if not.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *c = accept;
	while (*c)
	{
		if (*s == *c)
		{
			return (s);
		}
		c++;
	}
	s++;
	}
	return ('\0');
}
