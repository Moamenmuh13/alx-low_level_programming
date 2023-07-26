#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: An array of integers
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;

while (start < end)
{
int temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
}
