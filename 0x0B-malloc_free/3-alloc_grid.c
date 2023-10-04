#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @hight: hight input
 * @width: width input
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int hight)
{
	int **arr, w, h;

	if (width <= 0 || hight <= 0)
		return (NULL);
	arr = malloc(hight * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (w = 0; w < hight; w++)
	{
		arr[w] = malloc(width * sizeof(int));
		if (arr[w] == NULL)
		{
			for (w = 0; w < hight; w++)
				free(arr[w]);
			free(arr);
			return (NULL);
		}
		else
		{
			for (h = 0; h < width; h++)
				arr[w][h] = 0;
		}
	}
	return (arr);
}
