#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: Pointer of the head of the linked list
 * Retrun: void
*/
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}

}
