#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: adress of node
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++counter;
		h = h->next;
	}
	return (counter);
}
