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
}
else
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j >= 1; j--)
_putchar(' ');

for (k = 1; j <= i; k++)
_putchar('#');

_putchar('\n');
}
}
}