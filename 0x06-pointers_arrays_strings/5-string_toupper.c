#include "main.h"
/**
 * leet - Concatenates src to dest.
 * @str: The input string.
 * Return: A pointer of the resulting string
 */

char *leet(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - 32;
}
ptr++;
}

return (str);
}
