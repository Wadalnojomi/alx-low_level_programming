#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prins a number evry time it run
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand()  - RAND_MAX / 2;
	printf("%d \n", n);
	if (n > '0')
	{
	printf("is positive");
	}
	else if (n == '0')
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}
	return (0);
}
