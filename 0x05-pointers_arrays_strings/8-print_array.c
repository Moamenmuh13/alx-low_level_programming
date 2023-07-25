#include "main.h"
/**
 * print_array - Print all alements of an array
 * @s: the array of integers
 * @n: the number of elemetns to print
 */
void print_array(int *a, int n)
{
if (n <= 0)
return;

for (int i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n -1)
_putchar(', ');

}
_putchar('\n');
}
