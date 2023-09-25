#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string to locate character in.
 * @c: Character to be located.
 *
 * Return: Return to character found if not NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
