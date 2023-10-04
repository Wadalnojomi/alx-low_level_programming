#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter
 *  @str: string to be copied
 *  Return: to the duplicated string if succsess,NULL if not enugh memory
 */
char *_strdup(char *str)
{
	int counter, i;
	char *new_str;

	if (str == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
		counter++;
	new_str = malloc(counter + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= counter - 1; i++)
		new_str[i] = str[i];
	new_str[counter] = '\0';
	return (new_str);
}
