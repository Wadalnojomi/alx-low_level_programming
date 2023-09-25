#include "main.h"
/**
 * _strchar - locates a character in a string.
 * @s: string to locate character in.
 * @c: Character to be located.
 *
 * Return: Return to character found if not NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return ('\0');
}
