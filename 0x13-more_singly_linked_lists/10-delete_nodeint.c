#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in the list.
 * @head: Pointer to pointer of the head of the linked list.
 * @index: Index of the node to be deleted (starting at 0).
 * Return: 1 if deletion succeeded, -1 if deletion failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *previous = NULL;
listint_t *temp = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
{
previous = current;
current = current->next;
}

if (current == NULL)
return (-1);

previous->next = current->next;
free(current);

return (1);


}
