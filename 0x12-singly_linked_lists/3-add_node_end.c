#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: the node to add to.
 * @str: the string.
 * Return:  the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *final_node;
	{
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	}
	{
	final_node = *head;
	while (final_node->next != NULL)
	{
		final_node = final_node->next;
	}
	final_node->next = new_node;
	}

	return (new_node);

}
