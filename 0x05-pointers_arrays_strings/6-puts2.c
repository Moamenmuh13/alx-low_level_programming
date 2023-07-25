#include "main.h"
/**
 * _puts2 - Print the string
 * @str: The string to print
 */
void _puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(*str);
i++;
}
}
_putchar('\n');
}
