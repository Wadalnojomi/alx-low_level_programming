#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: beginning of a list_t list
 * @str: string
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}
