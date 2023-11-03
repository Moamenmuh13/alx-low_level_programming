#include "hash_tables.h"
/**
 * hash_djb2 - Create a hash table.
 * @size: The size of the array in the hash table.
 * Return: A pointer to the newly created hashtable or NULL if an error occurs.
 */

unsigned long int hash_djb2(const unsigned char *str)
{

	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}