#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and set memory to zero.
 * @nmemb: The number of elements in the array
 * @size: the size of each element in byts
 * Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
*((char *) ptr + 1) = 0;

return (ptr);
}
