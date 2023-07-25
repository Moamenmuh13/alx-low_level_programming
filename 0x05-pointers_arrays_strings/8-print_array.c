#include "main.h"
/**
 * print_array - Print all alements of an array
 * @s: the array of integers
 * @n: the number of elemetns to print
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);

if (i != n -1)
_putchar(', ');

}
_putchar('\n');
}
