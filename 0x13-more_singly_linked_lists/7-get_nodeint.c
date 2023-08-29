#include "lists.h"
/**
 * get_nodeint_at_index - return the node of a listint_t linked list
 * @head: pointer tof the head
 * @index: index of the desird node
 * Return:  NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
return (current);

current = current->next;
current++;
}

return (NULL);
}
