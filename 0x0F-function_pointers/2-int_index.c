#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: num of elements in array
 * @cmp: pointer of the comprion functions
 * Return: Index of the first element for which the cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}

return (-1);
}
