#include "lists.h"
/**
 * free_listint2 - frees the listint_t
 * @head: double pointer of linkedlist
 * Return: Void
*/
void free_listint2(listint_t **head)
{
listint_t *next;
if (head == NULL)
return;
while (head != NULL)
{
next = (*head)->next;
free(*head);
*head = next;
}
}
