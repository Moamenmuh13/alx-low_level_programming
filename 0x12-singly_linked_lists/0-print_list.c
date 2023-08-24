#include "lists.h"
/**
 * print_list -function that prints all the elements of a list_t
 * @h: tname of the list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
int count = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
{
printf("[%d] %s\n", current->len, current->str);
}
count++;
current = current->next;
}

return (count);
}
