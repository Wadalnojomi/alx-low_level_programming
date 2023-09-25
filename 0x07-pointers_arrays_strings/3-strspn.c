#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to chek.
 * @accept: string to check aganist.
 *
 * Return: Number of bytes of string s in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (!accept[y])
			break;
	}
	return (x);

}
