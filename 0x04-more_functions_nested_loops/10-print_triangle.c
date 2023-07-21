#include "main.h"

/**
* print_triangle - prints a triangle of '#' characters
* @size: the size of the triangle
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

for (i = 1; i < size; i++)
{
for (k = size - i; k >= 1; k--)
_putchar(' ');
for (j = 1; j <= i + 1; j++)
_putchar('#');

_putchar('\n');
}
}
}
