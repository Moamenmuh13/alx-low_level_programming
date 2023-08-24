#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer of a pointer to the head of the linked list
 * @str: string to be added to the new node
 * Return: The address of the new element, or null if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current;

new_node = malloc(sizeof(size_t));

if (new_node == NULL)
return (NULL);


new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

current = *head;
while (current->next != NULL)
current = current->next;

current->next = new_node;

return (new_node);
}
