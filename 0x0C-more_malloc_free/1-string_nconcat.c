#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: firt string
 * @s2: second string
 * @n: nomber of bytes to allocate
 * Return: If the function fails - NULL
 * Otherwise - a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len_s1 = 0, len_s2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n >= len_s2)
		n = len_s2;
	s3 = malloc(sizeof(char) * (len_s1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		s3[i] = s1[i];
	for (i = 0; i < n; i++)
		s3[len_s1 + i] = s2[i];
	s3[len_s1 + n] = '\0';
	return (s3);
}
