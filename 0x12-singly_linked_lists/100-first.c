#include <stdio.h>
/**
 * my_constructor - it prints before the main.
 * Return: nothing.
 */
__attribute__((constructor))
void my_constructor(void)
{
printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
