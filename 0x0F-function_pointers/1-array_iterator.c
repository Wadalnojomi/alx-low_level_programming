#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter on elements of an array.
 * @array: array
 * @size_t: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
