#include "main.h"
/**
 * _print_rev_recursion - prints a string revercing
 * @s: The input string to print reverse
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);

}