#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, __attribute ((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
