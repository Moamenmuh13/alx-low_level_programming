#include "main.h"
/**
 * string_toupper - Concatenates src to dest.
 * @str: The input string.
 * Return: A pointer of the resulting string
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr = *ptr - ('a' - 'A');

ptr++;
}

return (str);
}
