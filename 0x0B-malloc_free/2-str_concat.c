#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: string to be copied from folwed by s2
 * @s2: second string to be copied into s3
 * Return: to s3 in succsess NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, index = 0, i, j;
	char *s3;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	s3 = malloc((len1 + len2) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[index] = s1[i], index++;
	for (j = 0; j < len2; j++)
		s3[index] = s2[j], index++;
	s3[index] = '\0';
	return (s3);
}
