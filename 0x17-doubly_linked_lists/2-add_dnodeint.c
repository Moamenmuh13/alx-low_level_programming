#include "lists.h"

/**
 * add_dnodeint - Returns the number of elements in a doubly linked list.
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer value to be added to the new node
 * Return: The number of elements in the list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
