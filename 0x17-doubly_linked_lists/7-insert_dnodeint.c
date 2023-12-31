#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at a given position in list.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node (starting from 0).
 * @n: The integer value for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
