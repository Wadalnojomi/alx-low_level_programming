#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars,initializes with specific char.
 * @size: the output size in bytes.
 * @c: character to be initialize with.
 *
 * Return: to the array succsese.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
