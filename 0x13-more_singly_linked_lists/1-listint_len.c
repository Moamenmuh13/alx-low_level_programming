#include "lists.h"
/**
 * listint_len - print all elements of the list
 * @h: head of pointer
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
