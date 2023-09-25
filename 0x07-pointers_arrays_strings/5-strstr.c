#include "main.h"
/**
 * _strstr -  locates a substring.
 * @haystack: string to check
 * @needle:substring to be found
 * Return: to pointer to beginning of the located substring, or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');

}
