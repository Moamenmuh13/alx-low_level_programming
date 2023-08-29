#include "lists.h"
/**
 * add_nodeint - add node in the beginning of a listint_t
 * @head: head of pointer
 * @n: number to add to the list
 * Return: NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;

if (head == NULL)
return (NULL);
p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
*head = p;

return (p);
}
