#include "main.h"
/**
 * print_array - Print all alements of an array
 * @a: the array of integers
 * @n: the number of elemetns to print
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
printf(", " );
}
_putchar('\n');
}
