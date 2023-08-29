#include "lists.h"
/**
 * free_listint - frees the listint_t
 * @head: head of linkedlist
 * Return: Void
*/
void free_listint(listint_t *head)
{
listint_t *next;
while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
