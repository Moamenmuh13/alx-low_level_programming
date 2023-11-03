#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 *				they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			printed = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
