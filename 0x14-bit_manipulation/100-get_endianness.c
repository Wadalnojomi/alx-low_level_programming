#include "main.h"
/**
 * get_endianness - returns endianness
 * Return: 1 for littel endians, 0 for big ones
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	if (*p == 1)
		return (1); /*littel indians*/
	else
		return (0); /*big indians*/
}
