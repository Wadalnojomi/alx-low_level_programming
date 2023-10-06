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
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
