#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: node list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
