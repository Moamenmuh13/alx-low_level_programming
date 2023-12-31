#include "main.h"
/**
 * _strncat - Concatenates src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended tp dest.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

char *dest_end = dest;

while (*dest != '\0')
dest++;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_end);
}
