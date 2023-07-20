#include "main.h"

/**
* print_triangle - prints a triangle of '#' characters
* @size: the size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

for (int row = 0; row < size; row++)
{
for (int space = 0; space < size - row - 1; space++)
_putchar(' ');
for (int hash = 0; hash < row + 1; hash++)
_putchar('#');

_putchar('\n');
}
}
