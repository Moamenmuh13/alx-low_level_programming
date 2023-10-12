#include "lists.h"

/**
 * add_dnodeint_end - Returns the number of elements in a doubly linked list.
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer value to be added to the new node
 * Return: The number of elements in the list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
