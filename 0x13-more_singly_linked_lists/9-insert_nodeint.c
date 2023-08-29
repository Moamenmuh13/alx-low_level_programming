#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at given position in the list.
 * @head: Pointer to pointer of the head of the linked list.
 * @idx: Index at which the new node should be inserted (starting at 0).
 * @n: Value to be assigned to the new node.
 * Return: Address of the new node or NULL if insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = *head;
unsigned int i = 0;
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);


new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;


if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;

current->next = new_node;

return (new_node);
}
