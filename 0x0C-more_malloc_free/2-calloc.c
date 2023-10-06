#include "main.h"
/**
 * _calloc - allocate memory for an array of nmemb elements size of each bytes
 * and returns a pointer to the allocated memory.
 * @nmemb: the number of elements to be allocated.
 * @size: size of esch bytes.
 * Return: returns NULL if size of nmemb is 0 and if it failed.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = 0;
	return (ptr);
}
