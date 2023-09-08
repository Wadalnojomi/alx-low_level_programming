#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 /**
  * main - Printing a random number eachtime it is executed
  */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive %d \n");
	}
	else if (n == 0)
	{
	printf("is zero %d \n");
	}
	else
	{
	printf("is negative %d \n");
	}
	return (0); 
}
