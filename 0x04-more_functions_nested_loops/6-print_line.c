#include "main.h"
/**
 * print_line - Print lines
 * @n: parameter number of lenght of the line
 */

void print_line(int n)
{
char line;
if (n == 0)
{
_putchar('\n');
}
else 
{
for ( line = '0'; line <= n; line++)
{
_putchar('_');
}
_putchar('\n');
}
}
