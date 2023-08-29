#include "lists.h"
/**
 * add_nodeint_end - add node in the end of a listint_t
 * @head: head of pointer
 * @n: number to add to the list
 * Return: NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *current;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

current = *head;

if (*head == NULL)
*head = new_node;
else
{
while (current->next != NULL)
current = current->next;
current->next = new_node;
}

return (new_node);
}
