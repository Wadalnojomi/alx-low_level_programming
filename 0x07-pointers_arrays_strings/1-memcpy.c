#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointig file to be copied to, return to it
 * @src: pointing file to be copy
 * @n: size of area in bytes
 *
 * Return: Alowys to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
			dest[i] = src[i];
	return (0);
}
