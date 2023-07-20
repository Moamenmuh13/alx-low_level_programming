#include "main.h"
/**
 * print_triangle - Print a triangle followed by a new line
 * @size: parameter the size of triangle
 */

void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = size - i; j < 0; j--)
_putchar(' ');

for (k = 0; j < i; k++)
_putchar('#');

_putchar('\n');
}
}
