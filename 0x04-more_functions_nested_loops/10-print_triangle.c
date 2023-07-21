#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 1; i < size; i++)
        {
            for (j = 1; j <= i + 1; j++)
            {
                if ((i + j) <= size)
                    _putchar(' ');
                else
                    _putchar('#');
            }
            _putchar('\n');
        }
    }
}
