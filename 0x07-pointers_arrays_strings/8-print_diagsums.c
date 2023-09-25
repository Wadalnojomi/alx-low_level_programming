#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to start of matrix
 * @size :width of matrix colum
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0, second_diagonal_sum = 0;
	int i;

	if (a == NULL)
	{
		printf("Error: Null pointer passed to function.\n");
		return;
	}
	for (i = 0; i < size; i++)
	{
		main_diagonal_sum += a[i * size + i];
		second_diagonal_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", main_diagonal_sum, second_diagonal_sum);
}
