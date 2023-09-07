#include <stdio.h>

int main(void)
{
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
printf("size of char: %zu byte(s)\n",sizeof (char));
printf("size of int: %zu byte(s)\n",sizeof (int));
printf("size of long int: %zu byte(s)\n",sizeof (long int));
printf("size o long long int:%zu byte(s)\n",sizeof (long long int));
printf("size of float: %zu byte(s)\n",sizeof(float));

return (0);
}
