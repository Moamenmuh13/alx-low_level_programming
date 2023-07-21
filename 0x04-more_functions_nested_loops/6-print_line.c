#include "main.h"
/**
 * print_line - Print lines
 * @n: parameter number of lenght of the line
 */

void print_line(int n)
{
    int line;

    for (line = 0; line < n; line++)
        _putchar('_');

    _putchar('\n');
}
