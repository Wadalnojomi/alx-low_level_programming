#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: This is the range min to allocate in the memory
 * @max: This is my range max to allocate in the memory
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
