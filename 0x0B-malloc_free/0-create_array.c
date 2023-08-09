#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars
 * @size: size of array
 * @c: the char to init the array with
 * Return: successful return the array
*/

char *create_array(unsigned int size, char c)
{

char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;


return (array);
}
