#include "main.h"
/**
 * leet - Concatenates src to dest.
 * @str: The input string.
 * Return: A pointer of the resulting string
 */

char *leet(char *c)
{
int ptr;
ptr = 0;

while (*(c + ptr))
{
if (*(c + ptr) >= 'a' && *(c + ptr) <= 'z')
*(c + ptr) = *(c + ptr) - ('a' - 'A');

ptr++;
}

return (c);
}
