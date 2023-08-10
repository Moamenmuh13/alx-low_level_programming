#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: size of array
 * @max: the char to init the array with
 * Return: int
*/

int *array_range(int min, int max)
{
int *arr;
int size;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}

return (arr);
}
