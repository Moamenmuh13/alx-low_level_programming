#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: pointer to poijter of linked list
 * Return: Head node's data (n) or 0 if linked list is empty.
*/
int pop_listint(listint_t **head)
{

listint_t *temp;
int data;


if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;

*head = temp->next;
free(temp);

return (data);
}
