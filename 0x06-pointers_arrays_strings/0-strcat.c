#include "main.h"
/**
 * *_strcat - Concatenates src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended tp dest.
 *
 * Retrun: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{

char *dest_end = dest;

while (*dest != '\0')
dest++;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return dest_end;
}