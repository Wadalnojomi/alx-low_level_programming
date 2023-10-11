#include "function_pointers.h"
/**
 * print_name -  prints a name.
 * @name: name to be writen.
 * @f: function pointer to string.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
